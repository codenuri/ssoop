#include <iostream>

// 핵심
// 사용자 정의 타입의 객체를 std::cout 으로 만들려면
// => operator<<() 를 일반함수 버전을 만들면 됩니다.
// => 아래 예제 참고. 

class Point
{
	int x;
	int y;
public:
	Point(int x, int y) : x(x), y(y) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	Point p(1, 2);

	// operator<<(cout, p)
	std::cout << p ; // cout.operator<<(Point) 가 있어야 합니다.
//					 // => 당연히 operator<<(Point) 버전은 없습니다.
					 // => C++ 표준 ostream 에 멤버 추가도 안됩니다.
					 // 
					 // 하지만, 일반 함수로는 가능합니다.
					 // operator<<(std::ostream, Point) 가있으면됩니다
					
					
					
}


