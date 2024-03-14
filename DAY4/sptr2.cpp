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

	~Ptr() { delete obj; }
};

int main()
{
//	Car* p = new Car; 
//	delete p;

//	Ptr p( new Car );
	Ptr p = new Car;

	// p : Car 가 아닌 Ptr 타입
	//     포인터가 아닌 객체

	// "Ptr 의 객체" p 를 "Car의 포인터" 처럼 사용
	p->go(); // ( p.operator->() ) go() 이지만 컴파일러는 
			 // ( p.operator->() )->go() 처럼 해석해 줍니다.

}