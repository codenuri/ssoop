#include <iostream>

int g = 10;

class Point
{
	int x = 0;
	int y = ++g;
public:
	Point() {}
	Point(int a) : y{a} {}
};
int main()
{
	Point p1;
	Point p2(3);

	std::cout << g << std::endl; // 실행하지 말고 결과 예측해 보세요
}