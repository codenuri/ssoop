#include <iostream>

// 핵심 : 타입을 만들때
//		 상태를 나타내는 데이타와 연산을 수행하는 함수를 
//		 묶어서 타입을 만들자.!!

// C   : struct 에 함수를 넣을수 없다.
// C++ : struct 에 함수를 넣을수 있다.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int get_rect_area()
	{
		return (right - left) * (bottom - top);
	}

	void draw_rect()
	{
		std::cout << "draw rect" << std::endl;
	}
};

int main()
{
	Rect rc = { 1,1,10,10 };

	int n1 = rc.get_rect_area();  // C++ 스타일
	rc.draw_rect();

//	int n1 = get_rect_area(rc);	  // C 스타일
//	draw_rect(rc);
}