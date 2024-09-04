#include <iostream>

// 144 p

class Animal
{
public:
	void cry1() { std::cout << "Animal cry1" << std::endl; } // 1

	void cry2() { std::cout << "Animal cry2" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	void cry1() { std::cout << "Dog cry1" << std::endl; }  // 2
	void cry2() { std::cout << "Dog cry2" << std::endl; }  // 2
};

int main()
{
	Animal a;
	Dog    d;

	a.cry1();	// "Animal cry1"
	d.cry1();   // "Dog cry1"

	Animal* p = &d;

	p->cry1(); 
}



