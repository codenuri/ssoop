#include <iostream>

struct Point
{
	int x, y;
};
void foo(int n)    {} 
void goo(Point pt) {}

int main()
{
	Point p = { 1,2 };

	foo(3); // 인자의 전달은 "복사 초기화" 과정입니다.
			// int n = 3;
	foo({3});// int n = {3};

	goo(p);	
	goo({1,2}); // Point pt = {1,2} 의 의미.	
}





