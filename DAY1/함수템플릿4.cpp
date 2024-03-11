#include <iostream>

// decltype 키워드가 아래 반환 타입 같은 것을 만들기 위해 도입된 키워드 입니다.

template<typename T1, typename T2>
//decltype(a + b) Add(T1 a, T2 b) // error. a, b 를 선언전에 사용하는 코드.

auto Add(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}
int main()
{
	std::cout << Add(3, 4.1) << std::endl;

//	a = 20; // error. 변수를 선언전에 사용한것
//	int a = 0;
//	a = 20;	// ok
}