#include <iostream>

// 상속 사용시 "생성자 호출의 원리(순서)" 를 명확히 알아 두세요
// => 아래 주석 참석

class Base
{
	int data;
public:
	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
public:
	// 사용자 코드		// 컴파일러가 변경한 코드
	Derived()		   // Derived() : Base() 			
	{ 
		std::cout << "Derived()" << std::endl; 
	} 
	Derived(int a)	  // Derived(int a) : Base()   // <= 컴파일러 추가 코드는		
	{											   //    항상 디폴트 생성자 호출 코드
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived()      
	{ 
		std::cout << "~Derived()" << std::endl; 
		// ~Base()  <= 기반 클래스 소멸자 호출 코드 추가
	}
};
int main()
{
//	Derived d1;		// call Derived::Derived()
	Derived d2(5);  // call Derived::Derived(int)
}




