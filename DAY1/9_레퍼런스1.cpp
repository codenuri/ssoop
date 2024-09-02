// 9_reference1.cpp

#include <iostream>

int main()
{
	int n = 10;

	// #1. 원리 : 결국 포인터 - 59page
	// => C++ 표준문서에 "reference 는 pointer" 이다 라고 되어 있지 않지만
	// => 대부분 컴파일러는 포인터로 구현
	// => 레퍼런스를 "자동 dereferencing 되는 안전한 포인터" 라고도합니다.
	int& r = n;
	r = 20;

	int* p = &n;
	*p = 20;

	// #2. pointer 와 reference 차이점
	// 포인터는 초기화 되지 않을수 있고, null pointer 일수도 있습니다.

	int* p1;
	int* p2 = nullptr; // 또는 0

	*p2 = 20; // 잘못된 메모리 참조 그래서, null check 해야 합니다.
	if (p2 != nullptr) {}

	// reference : 대부분의 경우 대상체가 존재합니다.(안전)
	int& r1;     // error. 초기화 되지 않은 reference 는 에러
	int& r2 = n; // ok

	r2 = 10; // 대부분 안전. null check 필요 없음.


	// #3. pointer 는 변수지만, reference 자체는 상수 입니다.
	int n1 = 10;
	int n2 = 20;

	int* p3 = &n1;
	p3 = &n2;     // 대상체 변경

	int& r3 = n1;
	r2 = n2;
}