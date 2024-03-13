#include <iostream>

class Base
{
public:
	Base()  {  }
	virtual ~Base() {  } // 핵심 : 기반 클래스로 사용되는 모든 클래스는
						 //        반드시 소멸자를 virtual 로 해야 한다.
						// 단, "virtual" 을 사용하지 않고도 해결가능. 
};

class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived() 자원할당" << std::endl; }
	~Derived() { std::cout << "~Derived() 자원해지" << std::endl; }
};

int main()
{
//	Derived d;	

//	Derived* p = new Derived;	// Derived 객체 생성됨. 생성자 호출.
//	delete p;					// 위에서 만든 객체 파괴. 소멸자 호출

	Base* p = new Derived; // "new Derived" 이므로 Derived 생성자 호출
	delete p; 				// p가 가리키는 객체가 파괴되므로 소멸자 호출

	// 소멸자 호출도 "함수 호출" 의 과정
	// C++ 에서 함수 호출은 2가지가 있다. 
	// => static binding, dynamic binding

	// 1. 컴파일러는 p가 가리키는 곳은 어떤 객체인지 모르고, p의 타입만 안다.!
	// 2. 컴파일러는 p가 Base* 라는 것만 알기 때문에
	// 3. Base 클래스 선언을 보고 "소멸자가 virtual 인지 아닌지 조사"

	// => Base 소멸자가 가상이 아니면 static binding 이므로 ~Base() 만 호출
	// => Base 소멸자가 가상이면 dynamic binding 이므로 객체를 조사해서 소멸자호출
	//								객체가 Derived 라면 ~Derived() 호출.
}





