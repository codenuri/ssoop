#include <iostream>
#include <vector>
#include <list>
#include <algorithm>



int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// k의 배수 찾기
	int k = 3;

	auto ret1 = std::find_if(v.begin(),	v.end(),

		[ k ](int a) { return a % k == 0; });

	// [k]( ) {} : 지역변수 k 를 람다표현식 안에서 사용하겠다는 문법
	//			   "지역변수 캡쳐" 라고 표현합니다.

	//================================================
	// 위코드를 C++ 컴파일러가 아래 처럼 변경합니다.

	class CompilerGeneratedName
	{
		int k;
	public:
		CompilerGeneratedName(int n) : k(n) {}

		auto operator()(int a)
		{
			return  a % k == 0;
		}
	};
	auto ret2 = std::find_if(v.begin(), v.end(),
				CompilerGeneratedName{k});

	// 결국 위 코드는 lamda3.cpp 의 IsDivide와 완전히 동일합니다.

}