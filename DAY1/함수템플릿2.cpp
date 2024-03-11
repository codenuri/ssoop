#include <iostream>

template<typename T>
T Add(T a, T b)
{
	return a + b;
}
int main()
{
//	std::cout << Add(3, 4.1) << std::endl; // ?
					// 1번째 인자로 타입을 추론하면 int
					// 2번째 인자로 타입을 추론하면 double
					// => 즉, 타입을 추론할수 없다. error

	// 아래 처럼 타입을 전달하면 됩니다.
	// 이 경우 T=double 로 결정되어서 함수 생성
	std::cout << Add<double>(3, 4.1) << std::endl;
}