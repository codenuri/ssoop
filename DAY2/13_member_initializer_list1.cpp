#include <iostream>

class Point
{
	int x, y;
public:
	// 생성자에서 멤버 데이타에 값을 넣는 방법
	
	// #1. {} 안에서 대입 - 좋은 코드 아닙니다.
	/*
	Point(int a, int b) 		
	{
		x = a; 
		y = b;
	}
	*/

	// #2. member initializer list(멤버 초기화 리스트) 사용. - good
	Point(int a, int b) : x(a), y(b) 
	{
	}

};



int main()
{
	Point pt(0, 0);
}




