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

	Car* operator->() { return obj; } 

	~Ptr() { delete obj; }
};

int main()
{
//	Car* p = new Car; // raw pointer 사용. 더이상 필요 없으면 delete 해야 합니다.

	Ptr p = new Car;
}