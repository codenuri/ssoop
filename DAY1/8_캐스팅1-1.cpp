#include <iostream>

// 핵심 : C 스타일 캐스팅은 너무 위험 합니다.

/*
int main()
{
	int n = 0;

	double* p = (double*)&n;
				// => 너무나 위험한 캐스팅입니다.
				// => 과연 개발자의 의도 였을까요 ? 실수일까요 ??
				// => 코드에 의도가 나타나지 않습니다.

	*p = 3.4; // 이 순간을 생각 해보세요

}
*/

int main()
{
	const int c = 10;

	int* p = (int*)&c;

	*p = 20;

	std::cout << c << ", " << *p << std::endl; // ?  ? 
}