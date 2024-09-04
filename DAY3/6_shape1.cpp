#include <iostream>
#include <vector>

// 149page ~
// 파워 포인트 같은 프로그램을 만드는 것을 생각해 봅시다.

// 1. 모든 도형을 클래스로 설계 해야 한다.


class Rect
{
	// int x, y, w, h,  생성자등은 생략
public:
	void draw() { std::cout << "draw rect\n"; }
};
class Circle
{
public:
	void draw() { std::cout << "draw circle\n"; }
};

int main()
{
	std::vector<Rect*> v;
}



