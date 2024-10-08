#include <iostream>
// 163 page ~
class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	// 멤버 함수로 구현한 operator+
	// +은 이항연산자 이지만 멤버로 구현할때는 인자가 한개!!
	// 주의 ! : "p1+p2" 에서 p1이 상수 객체라도 호출가능해야 합니다.
	//		    상수멤버 함수로 해야 합니다.
	Point operator+(const Point& pt) const 
	{
		Point ret(x + pt.x, y + pt.y);
		return ret;
	}
};
int main()
{
	const Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // "operator+(p1, p2)" 를 찾거나
						// "p1.operator+(p2)"  를 찾게 됩니다


	p3.print();
}

