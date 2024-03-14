// sptr1.cpp
#include <iostream>

class Car 
{
public:
	void go() { std::cout << "Car go\n"; }
	~Car()    { std::cout << "~Car\n"; }
};

class Ptr 
{
	Car* obj;
public:
	Ptr(Car* p = nullptr) : obj{p} {}

	Car* operator->() { return obj; } // <====== 핵심!!!
};

int main()
{
//	Car* p = new Car; 
//	delete p;

	Car p( new Car );

	p->go();

}