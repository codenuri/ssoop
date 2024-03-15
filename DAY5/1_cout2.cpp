//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:

	};
	ostream cout;  // 미리 만들어진 전역 객체
}

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double)
}


