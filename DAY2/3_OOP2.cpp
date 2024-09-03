// 67page
#include <iostream>

// 객체지향 기본 개념 : 필요한 타입을 먼저 설계 하자.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

int get_rect_area(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}

void draw_rect(const Rect& rc)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	Rect rc = { 1,1,10,10 };
	int n1 = get_rect_area(rc);
	draw_rect(rc);
}