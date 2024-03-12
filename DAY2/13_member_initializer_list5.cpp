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
	Rect()
	{
	}
};

int main()
{
	Rect rc; 
}
