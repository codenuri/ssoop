#include <iostream>

class Base
{
	int data;
public:
	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};

// 상속에서 "생성자/소멸자" 호출의 정확한 원리
// => 아래 주석 참고 하세요

class Derived : public Base
{
public:
	// 사용자 코드		// 컴파일러가 변경한 코드
	Derived()			// Derived() : Base() 				
	{ 
		std::cout << "Derived()" << std::endl; 
	} 

	Derived(int a)		// Derived(int a) : Base() <= 컴파일러 추가 코드는 항상
	{												 // Base 의 디폴트 생성자 호출
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived()      
	{ 
		std::cout << "~Derived()" << std::endl; 

		// 소멸자는 Derived 구현부가 먼저 실행된후
		// Base::~Base()    // 기반 클래스 소멸자 호출
	}
};
int main()
{
//	Derived d1;		// call Derived::Derived()
	Derived d2(5);  // call Derived::Derived(int)
}




