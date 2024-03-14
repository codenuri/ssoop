#include <iostream>
// 158 page ~
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

	// 다음중 어떤 코드가 보기 좋을 까요 ?
	Point p3 = Add(p1, p2); 
	Point p4 = p1.Add(p2);		
	Point p5 = p1 + p2;		

	// 연산자 재정의란 ?
	// => 사용자 정의 타입에 대해서도 +, -, *, 등의 연산자를 사용할수 있게
	//    하는 문법

	Point p6 = p1 + p2; 
				// operator+(Point, Point) 함수 또는
				// p1.operator+(Point)     이 함수가 있으면 됩니다.
}

