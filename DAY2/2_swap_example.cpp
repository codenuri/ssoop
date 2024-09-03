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
// 1. 포인터 대신 reference
// 2. 진짜 함수가 아닌 함수를 만드는 틀(template) 사용
// 3. 성능향상을 위해서 inline 함수로
// 4. namespace 안에 제작

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

	std::swap(x, y); // C++ 표준의 swap 
					 // <algorithm> 헤더 필요. 


	std::cout << x << std::endl;
	std::cout << y << std::endl;
}



