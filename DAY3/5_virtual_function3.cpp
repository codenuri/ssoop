#include <iostream>

// 148

class Base
{
public:
	Base()  {  }
//	~Base() {  }
	virtual ~Base() {  } // 기반 클래스 만들때 소멸자는 반드시 
						 // virtual 로해야 합니다.
};

class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived() 자원할당" << std::endl; }
	~Derived() { std::cout << "~Derived() 자원해지" << std::endl; }
};

int main()
{
//	Derived d;	// ok. 아무 문제 없음

//	Derived* p = new Derived;	// 생성자 호출
//	delete p;					// 소멸자 호출. 아무 문제 없음

	// 아래 코드가 이 예제의 핵심!
	Base* p = new Derived;	// 메모리 할당후, 생성자 호출
	delete p;				// 소멸자 호출후, 메모리 해지 

	// 소멸자 호출도 "함수" 호출입니다.
	// => static binding 할지, dynamic binding 할지 결정해야 합니다.

	// 1. 컴파일러는 p 가 가리키는 곳을 알수 없고
	//	  "p 자체의 타입이 Base" 라는 것만 알고 있습니다.

	// 2. 그래서 Base 선언을 보고 소멸자가 "virtual" 인지 조사
	// => Base 소멸자가 virtual 아니면 : p가 Base* 이므로 ~Base만호출
	// => Base 소멸자가 virtual 이면 : p 가 가리키는 곳을 조사후 결정. 
}





