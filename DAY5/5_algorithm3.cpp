#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 단항(unary) 함수  : 인자가 1개인 함수
// 이항(binary) 함수 : 인자가 2개인 함수

// 조건자(predicator) : bool 을 반환하는 함수.

// find_if 는 3번째 인자로 "unary predicator" 를 요구 합니다.

bool foo(int a) { return a % 3 == 0;  }


int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// 주어진 구간에서 처음 나오는 "3" 을 찾아라
	auto ret1 = std::find(v.begin(), v.end(), 3); 


	// 주어진 구간에서 처음 나오는 "3의 배수" 을 찾아라
	// std::find    : 값   검색, 3번째 인자가 "값"
	// std::find_if : 조건 검색, 3번째 인자가 "함수"

	auto ret2 = std::find_if(v.begin(), v.end(), foo );

	if (ret2 == v.end())
	{
	}
	else
	{
		std::cout << *ret2 << std::endl; // 9 
	}

}