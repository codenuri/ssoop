// 67page
#include <iostream>

// 아래 코드가 복잡해 보이는 이유

// => 사각형 을 다루어야 하는데..
// => "Rect" 타입이 없으므로 "int 4개"로 사각형을 표현하기 때문에..

// => 구조체 문법으로 "Rect" 를 먼저 만들면 어떨까 ??

// 사각형의 면적을 구하는 함수
int get_rect_area(int left, int top, int right, int bottom)
{
	return (right - left) * (bottom - top);
}

// 사각형을 그리는 함수
void draw_rect(int left, int top, int right, int bottom)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	int n1 = get_rect_area(1, 1, 10, 10);
	draw_rect(1, 1, 10, 10);
}