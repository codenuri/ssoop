// 3_변수1
#include <iostream>

// C++ 은 C언어의 변수 관련 문법을 더욱 발전시켰습니다.
// 22 page ~

int main()
{
	// #1. 새로운 타입
	bool b1 = true; // false
	bool b2 = 1;    // 0 은 false, 0 이 아니면 true

	long long n = 10; // 64 bit 정수.


	// #2. 2진수 표기법, digit separator
	int n1 = 0b1;   	// C++11 부터 2진수 표기법 지원
	int n2 = 1'000'000; // C++11 부터 자릿수 표기법 지원.
						// 정확한 의미 : 정수형 literal 사이의 ' 는 컴파일시에
						//   			무시해달라. 결국 주석의 의미.
}
