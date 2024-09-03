// 6_member_initializer_list5.cpp
#include <iostream>

// C++11 부터는 멤버 데이터(필드)를 직접 초기화 할수 있습니다.

class Point
{
	int x = 0;
	int y = 0;
public:
	Point() {}
	Point(int b) : y(b) {}
};

int main()
{
	Point p;
}