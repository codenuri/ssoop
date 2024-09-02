#include <iostream>

// 핵심 : C 스타일 캐스팅은 너무 위험 합니다.

int main()
{
	int n = 0;

	double* p = (double*)&n;

	*p = 3.4; // 이 순간을 생각 해보세요

}