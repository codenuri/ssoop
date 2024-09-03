#include <iostream>



class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

// 핵심 : 멤버 데이타의 생성자가 호출되는 원리를 알아 두세요.

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	// 사용자	// 컴파일러 변경
	Rect()		// Rect() : leftTop{}, rightBottom{}
	{									// Point rightBottom;
		std::cout << "Rect()" << std::endl;
	}

	// 멤버 데이타의 다른 모양의 생성자를 호출하려면 직접 호출하면됩니다.
	//=> 표기법 알아 두세요
	Rect(int x1, int y1, int x2, int y2)
		: leftTop{ x1, y1 }, rightBottom{ x1, y2 }
	{
	}
};

int main()
{
	Rect rc1; // 이순간은 "call Rect::Rect()"
	Rect rc2{ 1,1, 10,10 };
}
