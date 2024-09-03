#include <iostream>

class Point
{
	int x;
	int y;
public:
//	Point() : x{ 0 }, y{ 0 } { std::cout << "Point()\n"; }
	Point(int a, int b) : x{ a }, y{ b } {}
};

// Point 에는 인자 없는 생성자가 없습니다
// Point p1;      // error
// Point p2{1,2}; // ok

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	// 사용자 코드			// 컴파일러가 변경한 코드
	Rect()					// Rect() : leftTop{}, rightBottom{}
	{
		std::cout << "Rect()\n";
	}
};



int main()
{
	Rect rc; 
}
