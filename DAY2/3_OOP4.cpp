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
	// #1. 아래 처럼 r1, r2 객체 생성시
	// => 멤버 데이타만 각각 스택에 놓이게 됩니다.
	// => 멤버 함수는 코드 메모리에 한개씩만 있고
	//    r1, r2 가 같이 사용하게 됩니다.

	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16


	// #2. 용어
	int n1 = 10; 	// 
	n1 = 20;		// "변하는 수", "변수" 라고 합니다.	

	Rect r = { 1, 1, 10, 10 };	// "변수" 대신 "객체" 라고 합니다

	// 객체 : 세상에 존재하는 모든 것들
	//        엄격히는 위의  "n1" 도 객체 입니다.


	// C++은 관례상
	// primitive 타입(int, double)을 메모리에 만든것(인스턴스) : 변수
	// 사용자가 만든 타입을 메모리에 만든것(인스턴스) : 객체
}
