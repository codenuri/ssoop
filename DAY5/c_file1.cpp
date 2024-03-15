#include <iostream>

// 규모가 큰 프로그램을 작성하려면
// => 파일 여러개로 나누어 작업해야 합니다.
// => C언어 는 함수 단위로 분리.

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int n = add(1,2);
	
	std::cout << n << std::endl;
}