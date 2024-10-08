#include <iostream>
// 163 page ~
class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }


	Point operator+(const Point& pt) const
	{
		Point ret(x + pt.x, y + pt.y);
		return ret;
	}


	friend Point operator+(const Point& p1, const Point& p2);

};

Point operator+(const Point& p1, const Point& p2)
{
	Point ret(p1.x + p2.x, p1.y + p2.y);

	return ret;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // error.
						// 일반함수(non-member function) 와 
						// 멤버함수 중 한개만 만드세요

	// #1. 멤버와 일반함수중 어떤것이 좋을까요 ?
	// => 다양한 의견이 있습니다.
	// => 그런데
	// 객체의 상태가 변하는 연산자 : 멤버가 좋다.( a += b)
	// 객체의 상태가 변하지 않은 연산자 : 일반함수가 좋다는 의견이 우세
	//									(a + b, a - b)

	int n = 3;
	Point p4 = p1 + p2; // p1.operator+(Point)
	Point p5 = p1 + n;  // p1.operator+(int)
	Point p6 = n  + p1; // n.operator+(Point) // n 은 int이므로 만들수 없다
						//						즉, 멤버 함수는 안됨. 
						// operator+(int, Point) 는 가능!!
					// 그래서, 일반함수가 좋다는 의견이 있었습니다

	// 그런데, C++20 에서 새로운 문법 등장
	Point p6 = n + p1; // 이순간 교환 법칙 허용
						// p1 + n 으로 해석됨. 
						// p1.operator+(int) 찾을수 있습니다.
}

