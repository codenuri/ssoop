// 6_member_initializer_list5.cpp
#include <iostream>

// C++11 부터는 멤버 데이터(필드)를 직접 초기화 할수 있습니다. - 92p
// => field initialization

class Point
{
	int x = 0;
	int y = 0;
public:
	Point() {}
	Point(int b) : y{ b } {}
};
// 위 코드를 컴파일러는 아래 처럼 변경합니다.
class Point
{
	int x;// = 0;
	int y;// = 0;
public:
	// 위 초기값을 가지고, 사용자가 만든 생성자를
	// 아래 처럼 변경합니다.
	Point()      : x{ 0 }, y{ 0 } {}
	Point(int b) : x{ 0 }, y{ b } {}
};


int main()
{
	Point p;
}