//#include <iostream>
#include <stdio.h>

// 주의 : std 안에 새로운 추가 하는 것은 하면 안됩니다.
//       아래 코드는 원리이해를 위한 수업용으로만..
namespace std
{
	class ostream
	{
	public:
		// 실제 화면 출력은 "각 OS 시스템콜 사용"
		// 아래 코드(printf)는 간단히 하기 위해
		void operator<<(int n)         { printf("%d", n); }
		void operator<<(double d)      { printf("%f", d); }
		void operator<<(const char* s) { printf("%s", s); }
	};
	ostream cout;
}

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double)

}


