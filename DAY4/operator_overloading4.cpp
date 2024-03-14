#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}

	// 3번소스에서 멤버 함수 operator+ 복사해 오세요
	Point operator+(const Point& pt) const 
	{
		std::cout << "member operator+\n";

		Point tmp{x + pt.x, y + pt.y};
		return tmp;
	}
	
	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "non-member operator+\n";
	Point tmp{p1.x + p2.x,  p1.y + p2.y};

	return tmp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;

	p3.print();
}

