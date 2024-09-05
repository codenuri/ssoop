#include <iostream>

// special member function 6개
// => 사용자가 만들지 않으면 컴파일러가 만들어 주는 멤버 함수
// => 생성자, 소멸자
// => 복사 생성자, 이동생성자
// => 대입 연산자, 이동대입연산자



// 자동 생성 규칙

// 복사 생성자 : 사용자가 복사 생성자를 만들지 않으면 컴파일러가 제공
// 생성자     : "어떠한 생성자도 만들지 않으면 컴파일러가 제공"


class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {}
	//	Point(const Point& p) : x(p.x), y(p.y)  {}
};

int main()
{
	Point p1;
	Point p2(p1);
}