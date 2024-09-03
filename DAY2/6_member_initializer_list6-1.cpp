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
	// 핵심 #1. 왜 아래 코드가 에러인지 알아야 합니다.
	// => Point 에 인자 없는 생성자가 없는데,
	//    컴파일러가 오른쪽 주석 처럼 코드를 변경하고 있기 때문에
	// 사용자 코드			// 컴파일러가 변경한 코드
	/*
	Rect()					// Rect() : leftTop{}, rightBottom{}
	{
		std::cout << "Rect()\n";
	}
	*/

	// 해결책 : 사용자가 멤버 데이타의 다른 생성자를 명시적으로 
	//			호출하면 됩니다.
	//			초기화 리스트 문법

	Rect() : leftTop{ 0, 0 }, rightBottom{ 0, 0 }
	{
	}
};

int main()
{
	Rect rc; 
}
// 디폴트 생성자(인자가 없는 생성자) 를 멤버 데이타로 가지는 경우
// => 반드시 초기화 리스트 문법으로 사용자가 명시적으로
//    멤버의 생성자를 호출해야 합니다.

