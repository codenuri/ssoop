#include <iostream>

// 클래스 선언 안에 멤버 함수 구현을 포함한 경우.
// => java, C#, swift 등의 대부분의 언어는 이렇게 클래스 작성
class Point
{
	int x, y;
public:
	Point(int a, int b) : x{a}, y{b} {}
	~Point() {}
	
	void set(int a, int b)	
	{						
		x = a;				
		y = b;				
	}
};

int main()
{
	Point p1{1,2};
	p1.set(10, 20); 
}
