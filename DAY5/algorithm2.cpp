// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm> // std::find 같은 알고리즘을 사용하기 위해

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// std::find
	// => [first, last) 구간에서 선형검색 수행
	// => first 는 검색에 포함(그래서 "["" ), last 는 검색 안됨( 그래서 ")" ),
	//    last-1 까지 검색
			
	auto ret1 = std::find(s.begin(), s.end(), 3);

	// 반환값 ret1 은 iterator
	// => 검색 성공시 : 요소(3)을 가리키는 반복자 반환
	// => 검색 실패시 : last 가 반환(s.end());

	if (ret1 == s.end())
	{
		std::cout << "검색 실패" << std::endl;
	}
	else
	{
		std::cout << "검색 성공 : " << *ret1 << std::endl;
	}
}
