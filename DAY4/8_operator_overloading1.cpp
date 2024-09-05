#include <iostream>
// 163 page ~
class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// Point 타입에도 "더하기" 개념을 추가하고 싶다.
	// 다음중 어떤 코드가 보기 좋을 까요 ?
	Point p3 = Add(p1, p2); 
	Point p4 = p1.Add(p2);		
	Point p5 = p1 + p2;		


	// #1. 연산자 재정의 개념
	// => 사용자 정의 타입의 객체도 연산자를 사용할수 있게 하자.


	// #2. 원리 : 약속된 함수를 호출하는 것
	Point p5 = p1 + p2;	// operator+(Point, Point) 함수 호출 또는
						// p1.operator+(Point) 함수가 있어도 가능. 
}

