#include <iostream>

// "? 를 어떻게 작성하는가" 핵심입니다
template<typename T1, typename T2>
? Add(T1 a, T2 b)
{
	return a + b;
}
int main()
{
	// 타입 인자를 명시적으로 전달하는 코드
	std::cout << Add<int, double>(3, 4.1) << std::endl;

	// 타입 인자 생략가능.
	std::cout << Add(3, 4.1) << std::endl;
}