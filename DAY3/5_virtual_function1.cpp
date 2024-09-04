#include <iostream>

class Animal
{
public:
	void cry1() { std::cout << "Animal cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// function override : 기반 클래스 멤버 함수를 파생 클래스에서 다시 구현하는 것
	// 
	// overloading 과 잘 구별 하세요 : square(int), square(double)

	void cry1() { std::cout << "Dog cry1" << std::endl; }  // 2
};

int main()
{
	Animal a; 
	Dog    d; 

	a.cry1();	// "Animal cry1"
	d.cry1();   // "Dog cry1"

	Animal* p = &d;

	p->cry1(); // ???



	// C++ / C# / Rust : Animal cry1
	// java, python, swift, kotlin 등 대부분의 객체지향언어 : Dog cry1
}

