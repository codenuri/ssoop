#include <iostream>

class Point
{
	int x, y;
public:
	void set(int a, int b)	
	{						
		x = a;				
		y = b;				
	}
};

void foo(int a, int b) {}

int main()
{	
	// C언어에는 함수의 주소를 담는 함수포인터라는 개념이 있습니다.
	void(*f1)(int, int) = &foo; // ok

	void(*f2)(int, int) = &Point::set; // ?? 될까요 ?

}	
