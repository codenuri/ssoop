// 함수템플릿1.cpp
#include <iostream>

template<typename T>
T Add(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << Add(3,   4)   << std::endl;
	std::cout << Add(3.1, 4.1) << std::endl;
}