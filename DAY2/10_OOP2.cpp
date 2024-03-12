// 67page
#include <iostream>


// 객체지향 프로그램의 핵심 개념
// => 프로그램에서 필요한 타입을 먼저 설계 한다.

// C언어의 구조체.
struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

int get_rect_area(Rect rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}
void draw_rect(Rect rc)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
//	int n1 = get_rect_area(1, 1, 10, 10);
//	draw_rect(1, 1, 10, 10);

	Rect rc = {1,1,10,10};
	int n1 = get_rect_area(rc);
	draw_rect(rc);
}