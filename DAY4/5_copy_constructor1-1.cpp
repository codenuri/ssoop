#include <iostream>

// copy constructor ( 복사 생성자, 123 page ~ )

class Point
{
public:
	int x, y;

	Point() : x{ 0 }, y{ 0 } {}	
	Point(int a, int b) : x{ a }, y{ b } {}		

	Point(const Point& other) : x(other.x), y(other.y) {}
};

int main()
{
	Point p3(1, 2);	

	Point p4(p3);   
	Point p5 = p3; 
}