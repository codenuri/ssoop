#include <vector>
#include <iostream>

// C++ 표준 라이브러리는 예외를 많이 사용하지는 않지만
// 일부 함수에서 예외가 발생합니다.

int main()
{
	std::vector<int> v(3);

	try
	{
		v.at(10) = 0;
	}
	catch (std::out_of_range& e)
	{
		std::cout << "잘못된 index 사용\n";
	}
}
