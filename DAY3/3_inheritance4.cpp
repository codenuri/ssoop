#include <iostream>

// 핵심 : 기반 클래스인 Base 에 디폴트 생성자가 없습니다.
// => 아래 코드에서 에러를 모두 찾아 보세요. 

class Base
{
public:
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
public:
	// 핵심 #1. Base에 디폴트 생성자가 없을때는 
	//		    아래 처럼만 만들게 되면 error 입니다
	//			오른쪽 주석 참고
//	Derived()      {}  // Derived()      : Base() {}
//	Derived(int a) {}  // Derived(int a) : Base() {}


	// 핵심 #2. 기반 클래스에 디폴트 생성자가 없다면
	//			파생클래스 생성자에서 반드시 명시적으로 다른 생성자를 호출
	//			해야 합니다. (초기화 리스트 위치에서 )
	Derived()      : Base(0) {}  
	Derived(int a) : Base(a) {}


};

int main()
{
}




