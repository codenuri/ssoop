#include <iostream>

class Point
{
	int x, y;
public:
	Point()             : x{0}, y{0} {} // 1
	Point(int a, int b) : x{a}, y{b} {} // 2

	// 복사생성자
	// => 자신과 동일한 타입의 객체 한개를 인자로 받는 생성자
	// => 사용자가 만들지 않으면 컴파일러가 제공
	Point(const Point& other) : x{other.x}, y{other.y} {}
};



int main()
{
	Point p1;		// 1번 생성자 호출
//	Point p2{1};	// error. 인자가 한개인 생성자가 없다.
	Point p3{1,2};	// 2번 생성자 호출
	Point p4{p3};   // ok. 인자가 한개인데, 그 타입이 p4과 같은 타입
					// "Point(Point)" 모양의 생성자 필요
					// => 복사 생성자, 사용자가 제공하지 않으면 컴파일러제공

	Point p5 = p3;  // 기본적으로 이 코드가 되도록 지원하기 위해
}