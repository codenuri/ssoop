// range-for
// 44 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// C/C++ 의 전통적인 for
	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;

	// C++11 의 새로운 for 문 - range for 라고 합니다.
	// PYTHON : for n in x
	// C#     : foreach(int n in x)

//	for ( int n : x )
	for ( auto n : x )	
		std::cout << n << std::endl;

	// x 위치는 "배열 뿐 아니라 std::vector, std::list" 도 사용가능

	// 전체가 아닌 일부만 ?
	// 또는 2칸씩 할수 없나요 ?
	// => C++20 부터는 가능한데, 그 전에는 안됩니다.
	// => legacy-for 사용하세요.
}
