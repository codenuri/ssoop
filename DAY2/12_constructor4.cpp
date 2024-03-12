#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

class Rect
{
	Point from;
	Point to;
public:
	Rect()
	{
		// 컴파일러가 이 위치에 멤버 데이타의 생성자를 호출하는 코드를 생성합니다.
		// => godbolt.org 에 이 코드 넣은후 확인해 보세요
		// call Point::Point() <= from 객체 초기화 위해
		// call Point::Point() <= to   객체 초기화 위해

		std::cout << "Rect()" << std::endl;
	}
};

int main()
{
	Rect rc; // call Rect::Rect()
}
