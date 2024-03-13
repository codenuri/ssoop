#include <iostream>

class Base
{
public:
	Base()  {  }
//	virtual ~Base() {  } // 가상함수를 사용하면 오버헤드가 있습니다.
		// 클래스 안에 가상함수가 여러개 있다면 소멸자를 가상으로 하는것은 나쁘지 않습니다.
		// 가상함수가 한개도 없는데, 소멸자 때문에 가상함수를 사용하는것은
		// 오버헤드가 있습니다.

	// protected 소멸자 : Base* 타입으로는 delete 하지 말라는 의도
protected:
	~Base() {}
};

class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived() 자원할당" << std::endl; }
	~Derived() { std::cout << "~Derived() 자원해지" << std::endl; }
};

int main()
{
	Base* p = new Derived; 
//	delete p; 	// error. protected 소멸자
	delete static_cast<Derived*>(p);

}

// isocpp.org 접속후, 상단 메뉴에서 "Core Guideline" 선택




