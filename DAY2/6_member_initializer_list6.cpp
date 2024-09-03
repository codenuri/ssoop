#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()             : x{ 0 }, y{ 0 } { std::cout << "Point()\n"; }
	Point(int a, int b) : x{a}, y{b}{} 
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:

	// 사용자 코드			// 컴파일러가 변경한 코드
	Rect()					// Rect() : leftTop{}, rightBottom{}
	{
		// 이 위치에 기계어 코드로
		// leftTop, rightBottom 생성자 호출 코드 생성
		// => C++로 표현할때는 위처럼 "초기화 리스트에 표현"

		std::cout << "Rect()\n";
	}
};



int main()
{
	Rect rc; // 실행결과 확인해 보세요
			 // call Rect::Rect() 
}
