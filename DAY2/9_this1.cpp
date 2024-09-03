#include <iostream>

// this : 객체지향 언어의 원리!!!! - 97p

// => 반드시 이해해 두세요

// 1. 멤버 함수는 컴파일 되면, 인자로 객체 주소를 받게 됩니다.
// => "this call" 이라고 합니다.

class Point
{
	int x, y;
public:
	void set(int a, int b)	// void set(Point* this, int a, int b)
	{						
		x = a;				// this->x = a;
		y = b;				// this->y = b;		

		std::cout << "set : " << this << std::endl;
	}
};

int main()
{
	Point p1;
	Point p2;

	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;

	p1.set(10, 20); // set(&p1, 10, 20) 의 원리로 호출

	p2.set(10, 20); // set(&p2, 10, 20)
}
