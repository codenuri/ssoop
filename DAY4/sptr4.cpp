// sptr1.cpp
#include <iostream>

class Car 
{
public:
	void go() { std::cout << "Car go\n"; }
	~Car()    { std::cout << "~Car\n"; }
};

template<typename T>
class Ptr 
{
	T* obj;
public:
	Ptr(T* p = nullptr) : obj{p} {}
	T* operator->() { return obj; } 
	~Ptr() { delete obj; }
};

int main()
{
	Ptr<Car> p = new Car;

	p->go();
						
}