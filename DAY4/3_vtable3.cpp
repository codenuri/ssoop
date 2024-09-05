#include <iostream>

class Animal
{
	int age;
public:
	virtual void cry() {}
	virtual void run() {}
};

class Dog : public Animal
{
	int color;
public:
	virtual void cry() override {}
};

int main()
{
	Animal a;
	Dog    d;

	std::cout << sizeof(a) << std::endl;
	std::cout << sizeof(d) << std::endl;
}


