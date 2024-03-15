//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		// 아래 2개 외에도 모든 표준 타입에 대해서 << 연산자 제공
		// => 실제 구현은 printf() 가 아닌 OS 가 제공하는 함수 사용해서 출력
		void operator<<(int n)    { printf("%d", n);}
		void operator<<(double d) { printf("%lf", d);}
		void operator<<(const char* s) { printf("%s", s);}
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


