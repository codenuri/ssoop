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
		std::cout << "Rect()" << std::endl;
	}
	// 위처럼 만들면 항상 from, to 의 디폴트 생성자가 호출됩니다.
	// 다른 생성자를 호출하면 아래 처럼 코드를 작성해야 합니다.
	Rect(int x1, int y1, int x2, int y2) : from(x1, y1), to(x2, y2) 
	{
//		from(x1, y1); // 이렇게 하면 from 이라는 멤버 함수를 찾게 됩니다.
		std::cout << "Rect(int, int, int, int)" << std::endl;
	}
};

int main()
{
	Rect rc1; 
	Rect rc2(1, 1, 10, 10);
}
