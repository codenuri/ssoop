#include <iostream>

// 앞의 Add 는 C++20 부터는 아래 처럼 만들게 됩니다.
// => 1, 2번째 인자는 서로 다른 타입인자 사용하게 됩니다.
auto Add(auto a, auto b)  // Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	std::cout << Add(3, 1.2) << std::endl; // 3.2
}