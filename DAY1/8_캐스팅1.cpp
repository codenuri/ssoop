﻿// 10_캐스팅1.cpp    49 page
#include <iostream>

// 핵심 #1. C언어 캐스팅은 한가지 방법만 있습니다.

// 핵심 #2. 그래서, 어떤 위험한 캐스팅 코드가
// => 개발자의 의도인지
// => 실수인지를 알수가 없습니다.

// 핵심 #3. 캐스팅 방법을 한가지가 아닌, 여러개를 제공해서
// => 용도에 맞게 사용하면 어떨까요 ?

int main()
{
	int n = 3;

	// #1. int변수 주소를 double* 에 담기
//	double* p = &n; // error

	double* p = (double*)&n; // ok. 

	*p = 3.4;	// 이순간의 메모리를 생각해 보세요
				// 잘못된 메모리를 접근하게 됩니다.


	// #2. 상수성 제거
	const int c = 10;

	int* p1 = (int*)&c;

	*p1 = 20;

	std::cout << c << std::endl; // 10
	std::cout << *p1 << std::endl; // 20 인데..
				// => 컴파일러마다 다를수 있습니다.
				// => undefined behavior
}
