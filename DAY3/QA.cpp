// QA
#include <iostream>

// C++ 언어의 복잡함을 잘 나타내는 예제

class Base
{
public:
	virtual void foo(int a = 10) { std::cout << "Base : " << a << std::endl; }
};
class Derived : public Base
{
public:
	void foo(int a = 20) override { std::cout << "Derived : " << a << std::endl; }
};

int main()
{
	Base* p = new Derived;
	p->foo(); // 결과 예측해 보세요
}