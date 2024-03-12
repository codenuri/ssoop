#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int get_area() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};

int main()
{	
	// #1. 메모리 layout
	// => Rect 형 변수의 갯수에 상관없이 멤버 함수는 코드메모리에 한개만 있습니다.
	// => 멤버 데이타는 변수당 한개씩 메모리에 놓이게 됩니다.

	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16
						// => 즉, 멤버 데이타만 크기로 계산됨.


	// #2. 용어
	int n1 = 10; 	// 
	n1 = 20;		// n1 은 "변"하는 "수" 입니다.
					// "변수" 라고 부릅니다.	

	Rect r = { 1, 1, 10, 10 };	// r 은 "변하는수" 라기 보다는
								// 사각형 한개를 나타 냅니다.
								// "객체" 라고 부릅니다

	// 객체(object) : 세상에 존재하는 모든 사물(자전거, 사각형, 나무등..)
	//				 변수도 결국 객체 입니다

	// 일부 언어는 "int n" 에서 n 도 객체라고 부릅니다
	// 하지만 C++ 은

	// primitive   type 의 instance(메모리에 생성한것) : 변수(variable)
	// user define type 의 instance(메모리에 생성한것) : 객체(object)
}
