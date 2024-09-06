// lambda1.cpp
#include <iostream>

// function object
// => () 연산자를 재정의 해서 함수 처럼 사용가능한 객체

// 왜 ?? 일반 함수를 만들면 되는데 ??

// 1. 상태를 가지는 함수
// 2. Closure
// 3. 그외에도 장점이 너무 많습니다.
// 4. C++20 이후는 모든 표준 함수는 함수가 아닙니다.(함수객체 입니다.)

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



