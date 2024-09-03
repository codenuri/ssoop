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
	Rect()
	{
		std::cout << "Rect()\n";
	}
};

int main()
{
	Rect rc; // 실행결과 확인해 보세요
}
