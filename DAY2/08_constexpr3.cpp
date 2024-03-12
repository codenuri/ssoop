#include <iostream>

// constexpr 로 재귀 호출도 가능합니다.
// 아래 코드를 "godbolt.org"에 넣어 보세요
constexpr int factorial(int n)
{
	return n == 1 ? 1 : n * factorial(n-1);
}
int main()
{
	int n = factorial(5);
}