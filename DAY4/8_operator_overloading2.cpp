#include <iostream>
// 163 page ~
class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // operator+(p1, p2) 
	

	p3.print();
}

