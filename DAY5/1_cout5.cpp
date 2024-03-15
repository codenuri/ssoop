#include <iostream>

// std::cout, std::cin 은 결국 객체이므로
// => 다양한 멤버 함수도 제공합니다.

int main()
{
	int n = 0;

	while(1)
	{
		std::cin >> n;   // 'a' 입력해 보세요

		if ( std::cin.fail() )
		{
			std::cout << "입력실패. 다시 입력하세요\n";
		}
		else
			break;
	}

	std::cout << n << std::endl; // 1. 0    2. 10     3. 97    4. -1
								 // 답은 0 
}