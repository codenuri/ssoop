#include <iostream>

// 144 p

class Animal
{
public:
	// non-virtual : static binding 해달라는 의미.
	//				 "포인터 타입에 따라 함수 결정"
	void cry1() { std::cout << "Animal cry1" << std::endl; } // 1


	// virtual : dynamic binding 해달라는 의미
	//			 "실행시간에 포인터가 가리키는 객체 조사해서 함수 결정"
	virtual void cry2() { std::cout << "Animal cry2" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	void cry1() { std::cout << "Dog cry1" << std::endl; }  // 2

	virtual void cry2() { std::cout << "Dog cry2" << std::endl; }  // 2
};


int main()
{
	Animal a;
	Dog    d;

	Animal* p = &d;

	p->cry1(); // static binding "Animal cry1"
	p->cry2(); // dynamic binding  "Dog  cry2"
}



