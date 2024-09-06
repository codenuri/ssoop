#include <iostream>

int main()
{
	// 람다 표현식은 auto 변수에 담아서 함수 처럼 사용가능합니다.
	// 의미 : 함수 안에서 함수를 만든것 (nested function)
	//		 C++ 은 함수안에 함수 만들수 없지만
	//	     람다표현식으로 가능 합니다.

	auto f = [](int a, int b) { return a + b; };
				// class xxx{ operator()() {} }; xxx{};

	int n = f(1, 2);

	// 람다 표현식의 주된 활용
	// #1. find_if 같은 알고리즘에서 인자로 전달
	// #2. 위와 같이 auto 변수에 담아서 함수 처럼 사용!
}