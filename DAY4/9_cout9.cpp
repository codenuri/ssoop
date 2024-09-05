#include <iostream>

int main()
{
	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (std::cin.fail() == true)
		{
			std::cout << "fail !!!\n";
			continue;
		}
		break;
	}
	std::cout << n; 
}