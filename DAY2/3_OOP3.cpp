#include <iostream>

// 핵심 : 타입을 만들때
//		 상태를 나타내는 데이타와 연산을 수행하는 함수를 
//		 묶어서 타입을 만들자.!!

// C   : struct 에 함수를 넣을수 없다.
// C++ : struct 에 함수를 넣을수 있다.

// 구조체 안에 함수를 넣어서 얻는 장점은 ?
// 1. 함수 인자로 데이타를 보낼 필요 없다.
// 2. 다양한 객체지향 문법으로 "사용하기 쉽고" "안전한 타입"을 만들수 있다.


struct Rect
{
	// 멤버 데이타(java, C#에서는 필드)
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수(java, C# 에서는 메소드 )
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
	Rect rc = { 1,1,10,10 };

	int n1 = rc.get_area();  // C++ 스타일
	rc.draw();

//	int n1 = get_rect_area(rc);	  // C 스타일
//	draw_rect(rc);
}