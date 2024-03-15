#include <iostream>

// 아래 처럼 멤버 함수의 구현을 클래스 외부에 만들수도 있습니다.
class Point
{
	int x, y;
public:
	Point(int a, int b);
	~Point();	
	void set(int a, int b);
};

Point::Point(int a, int b) : x{a}, y{b} {}
Point::~Point() {}

void Point::set(int a, int b)	
{						
	x = a;				
	y = b;				
}


int main()
{
	Point p1{1,2};
	p1.set(10, 20); 
}
