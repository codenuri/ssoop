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
	Derived()      {}  // Derived()      : Base() {}
	Derived(int a) {}  // Derived(int a) : Base() {}
};

int main()
{
}




