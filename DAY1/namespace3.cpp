// std::namespace - 9page
#include <algorithm>
using namespace std;	// 표준 함수 사용시 "std::" 없이 사용하겠다는 의도

// 모든 C++ 표준함수는 "std" 라는 이름 공간안에 만들어져 있습니다.

int count = 0;

int main()
{
	int n3 = count; // ?? 왜 이 코드가 에러일까요 ?
					// => C++ 표준에 std::count() 가 있습니다.
					// using namespace std 때문에 전역변수 count 와 이름 충돌!!

	int n1 = min(3, 2);      // C++ 표준 함수. algorithm 헤더 필요
	int n2 = std::min(3, 2); 
}
