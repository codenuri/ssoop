// 4_iterator3-1
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	for (auto e : c)
	{
		std::cout << e << ", ";
	}

	// 위 코드의 원리를 알아 봅시다.
}

