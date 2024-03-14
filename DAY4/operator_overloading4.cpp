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

	// operator+ 는 
	// 1. "non-member" 또는 "member" 중에 하나만 제공해야 합니다.
	// 2. 어느것이 좋을까요 ?

	// 일반적인 규칙
	// 단항연산자 : 일반적으로 객체의 상태가 변경됩니다(++p). 멤버로 하세요
	//				
	// 이항연산자 중 멤버의 상태가 변하는 것( p += 1 ) : 멤버

	// 이항연산자 중 멤버의 상태가 변하지 않는것(p1 + p2) : non-member
	// => 이유는 아래 참고

	int n = 0;
	Point p4 = p1 + p2;	// p1.operator+(Point)
	Point p5 = p1 + n;	// p1.operator+(int)   가 있어야 합니다.
	Point p6 = n  + p2; // n.operator+(Point) 가 되어야 하는데..
						// => n 은 int 입니다.
						// => 따라서 멤버로 만들수 없습니다
						// => 하지만 non-member 로는 가능
						// => operator+(int, Point)

	
}

