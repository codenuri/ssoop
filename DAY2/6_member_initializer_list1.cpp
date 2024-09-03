#include <iostream>
// 88 page ~ 

// #1. 프로그램에서 필요한 타입을 클래스로 먼저 설계 합니다.
// #2. 생성자를 만들어서 멤버 데이타를 초기화 합니다.
// #3. 멤버데이타 초기화시 "초기화 리스트"를 사용하세요

class Point
{
	int x, y;
public:
	// 생성자에서 멤버 데이타에 값을 넣는 방법
	
	// #1. {} 안에서 대입
	Point(int a, int b) 		
	{
		x = a; // 대입(assignment)
		y = b;
	}

	// #2. member initializer list(멤버 초기화 리스트) 사용.
	Point(int a, int b) : x(a), y(b)  // 초기화(initialization)
	{
	}

};



int main()
{
	Point pt(0, 0);
}




