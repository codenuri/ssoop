#include <iostream>

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double) 함수 호출.
					// => 즉, cout 은 객체이고, 연산자 재정의 기법을 사용한것
	
}


