// 2_복사생성자1.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point() : x{ 0 }, y{ 0 } {}
	Point(int a, int b) : x{ a }, y{ b } {}

	Point(const Point& p) : x{ p.x }, y{ p.y }
	{
		std::cout << "copy ctor" << std::endl;
	}
};

void f1(Point  p) {}
void f2(Point& p) {}

Point pt(1, 1);

Point  f3() { return pt; }
Point& f4() { return pt; }

int main()
{
	Point p1(1, 2);

	// 복사 생성자가 사용되는 경우 3가지 - 125p

	// #1. 자신과 동일한 타입의 객체로 초기화 될때 
	Point p2 = p1;  // 복사 생성자
	Point p3( p1 ); // 복사 생성자
	Point p4{ p1 };// 복사 생성자
	Point p5 = { p1 };// 복사 생성자


	// #2. 함수에 call by value 로객체 전달시
	f1(p1); // 복사 생성자
	f2(p2); // 복사본 생성 안되므로 "복사생성자 호출안됨"

	// #3. 함수가 return by value 로 객체를 리턴할때
	// => 리턴 용 임시객체
	f3(); // 리턴용 임시객체 때문에 복사 생성자 호출
	f4(); // 리턴용 임시객체 없음. 복사 생성자 호출 안됨.
}