#include <iostream>


template<typename T1, typename T2>
? Add(T1 a, T2 b)
{
	return a + b;
}
int main()
{

	std::cout << Add(3, 4.1) << std::endl;
}