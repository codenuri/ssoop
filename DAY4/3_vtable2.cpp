#include <iostream>

// 가상함수 원리   153page ~

class Animal
{
	int age;
public:
	virtual void cry() {}
	virtual void run() {}
};
//--------------------
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

	Animal* p = &d;
	p->cry();	
}


