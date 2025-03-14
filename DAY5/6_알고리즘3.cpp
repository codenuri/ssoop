// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


// 단항 함수 : 인자가 1개인 함수
// 이항 함수 : 인자가 2개인 함수

// 조건자(Predicate) : bool 을 반환 하는 함수

// find_if 의 3번째 인자는 "단항 조건자(unary predicate)" 입니다.

bool foo(int n) { return n % 3 == 0; }



int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// 주어진 구간에서 처음 나오는 "3" 을 찾아라
	auto ret1 = std::find(v.begin(), v.end(), 3); 

	// std::find    : 값   검색, 3번째 인자로 값
	// std::find_if : 조건 검색, 3번째 인자로 함수


	// 주어진 구간에서 처음 나오는 "3의 배수" 을 찾아라
	
	auto ret2 = std::find_if(v.begin(), v.end(), foo );

	if (ret2 == v.end())
	{
	}
	else
	{
		std::cout << *ret2 << std::endl;
	}

}