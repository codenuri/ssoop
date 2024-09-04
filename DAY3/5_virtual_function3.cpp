#include <iostream>

// 148

class Base
{
public:
	Base()  {  }
	~Base() {  }
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
	Base* p = new Derived;	// 
	delete p;				// 

}





