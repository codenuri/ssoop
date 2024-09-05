#include <iostream>

// copy constructor ( 복사 생성자, 123 page ~ )

class Point
{
public:
	int x, y;

	Point() : x{ 0 }, y{ 0 } {}	
	Point(int a, int b) : x{ a }, y{ b } {}		

	Point(const Point& other) : x(other.y), y(other.x) {}
};

int main()
{
	Point p1(1, 2);	

	Point p2(p1);   
	Point p3 = p1;  // 사용자가 만든 복사 생성자 호출
					// 사용자 구현은 x, y 를 바꾸어서 복사
	std::cout << p3.x << std::endl; // 2
	std::cout << p3.y << std::endl; // 1
}