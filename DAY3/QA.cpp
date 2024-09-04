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
			  // "Derived : 10"
			
			  // "실행시간 p가 가리키는 객체를 조사해서 -> foo( 10 )" 호출


	// 디폴트 값을 채우는 것 : 컴파일 시간에 컴파일러가 채운다
	// 가상함수를 호출하는 것 : 실행시간에 메모리를 조사해서!!

	// 컴파일 시간 문법과 실행시간 문법을 섞어서 사용하지 마세요
	// "가상함수에서 디폴트 인자 사용하지 마세요.
	//  사용했다면 override 할때 변경하지 마세요"


}