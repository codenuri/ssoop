#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}

	Point operator+(const Point& pt)
	{
		std::cout << "member operator+\n";

		Point tmp{x + pt.x, y + pt.y};
		return tmp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // operator+(p1, p2) 가 가능하거나 
						// p1.operator+(p2) 가 가능하면 됩니다

	p3.print();
}

