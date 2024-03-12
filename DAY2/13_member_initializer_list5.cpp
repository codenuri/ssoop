#include <iostream>

class Point
{
	int x;
	int y;
public:
//	Point() 			: x{0}, y{0}{} 
	Point(int a, int b) : x{a}, y{b}{} 
};

class Rect
{
	Point from;
	Point to;
public:
	/*
	// 개발자가 만든 코드		// 컴파일러가 변경한 코드
	Rect()					  // Rect() : from(), to() 
	{
	}
	*/

	// 디폴트 생성자가 없는 타입을 
	// 멤버 데이타로 사용하는 경우는
	// 반드시 사용자가 초기화 리스트로 멤버의 생성자를 명시적으로 호출해야 합니다.
	Rect() : from{0,0}, to{10, 10}
	{
	}

};

int main()
{
	Rect rc; 
}
