#include <iostream>
#include <algorithm>

// Swap를 만들어 봅시다.
// 1. C 버전
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 2. C++ 버전
// 1. pointer 대신 reference
// 2. 함수가 아닌 함수 template 으로
// 3. 함수 구현이 간단하므로 inline 으로
// 4. global 영역 보다는 namespace 안에!!
namespace Utils
{
	template<typename T>
	inline void Swap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
}

int main()
{
	int x = 3, y = 2;
//	Swap(&x, &y);
//	Utils::Swap(x, y);
	std::swap(x, y);  // 이미 C++ 표준에 swap 이 있습니다.
					  // <algorithm> 헤더 필요

	std::cout << x << std::endl;
	std::cout << y << std::endl;
}



