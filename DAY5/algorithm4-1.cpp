#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 2 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	int k = 3; // 사용자가 입력한 값이라고 가정!!

	// 주어진 구간에서 "k" 의 배수를 찾고 싶다. ??
	// => foo 같은 일반 함수를 사용하면 main 함수의 지역변수에 접근할수 없다.
//	auto ret1 = std::find_if( v.begin(), v.end(), foo ); // ??

	// 람다표현식의 장점
	// => main 함수 안에 있는 지역변수에 접근 가능하다.
	// => "지역변수 캡쳐" 라고 부르는 문법
	auto ret2 = std::find_if( v.begin(), v.end(),  
					[k](int n) { return n % k == 0; }     );

	// 또한, 람다표현식으로 하면 find_if 안에서 "람다 코드"가 인라인 치환됩니다.

}

