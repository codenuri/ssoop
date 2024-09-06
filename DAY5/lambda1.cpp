// lambda1.cpp
#include <iostream>

struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	Plus p; // p 는 함수가 아닌 객체 입니다. Plus 타입의 객체

	int n1 = p(1, 2); // 객체 p를 함수 처럼 사용합니다. 함수 객체라고합니다.
	int n2 = p.operator()(1, 2); // 이렇게 직접 호출해도 됩니다.

	// p1 + p2 => p1.operator+(p2)


}



