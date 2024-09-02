// 9_reference1.cpp

#include <iostream>

int main()
{
	int n = 10;

	// #1. 원리 : 결국 포인터
	// => C++ 표준문서에 "reference 는 pointer" 이다 라고 되어 있지 않지만
	// => 대부분 컴파일러는 포인터로 구현
	int& r = n;
	r = 20;

	int* p = &n;
	*p = 20;
}