//#include <iostream>
#include <stdio.h>

namespace std
{
	class ostream
	{
	public:
		// #1. << 연산자를 연속으로 하기 위해 자신을 참조로 반환
		// #2. 아래 3개만 만들었지만, 실제 표준은 모든 기본타입에 대해서 제공
		ostream& operator<<(int n) { printf("%d", n);         return *this;}
		ostream& operator<<(double d) { printf("%f", d);      return *this;}
		ostream& operator<<(const char* s) { printf("%s", s); return *this;}
	};
	ostream cout;
}

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n << ", " << d << "\n";
	// cout.operator<<(n).operator<<(", ").operator<<(d).operator<<("\n")

}


