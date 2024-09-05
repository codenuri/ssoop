//#include <iostream>
#include <stdio.h>

namespace std
{
	class ostream
	{
	public:
		void operator<<(int n) { printf("%d", n); }
		void operator<<(double d) { printf("%f", d); }
		void operator<<(const char* s) { printf("%s", s); }
	};
	ostream cout;
}

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n << ", " << d << "\n";

}


