#include <iostream>

// 객체지향 프로그램의 핵심 2.
// => 타입을 만들때
// => 상태를 나타내는 데이타와 상태를 가지고 연산을 수행하는 함수를
//    묶어서 타입을 설계 한다.

// C   구조체 : 함수를 포함 할수 없다.
// C++ 구조체 : 함수를 포함 할수 있다.  <== 핵심 !

// 함수를 구조체 안에 넣으면 어떤 장점이 있습니까 ?
// => 함수의 인자로 데이타를 별도로 보낼필요가 없다.
// => 앞으로 배울 다양한 문법으로 안전하고, 사용하기 쉬운 타입을 만들수 있다.


struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int get_area()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};

int main()
{
	Rect rc = {1,1,10,10};
	
//	int n1 = get_rect_area(rc);
//	draw_rect(rc);

	int n1 = rc.get_rect();
	rc.draw();
}