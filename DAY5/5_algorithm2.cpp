// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 알고리즘
// 일반적인 의미 : 문제를 해결하는 방법 
// C++ STL 에서 : "std::find" 같은 멤버가 아닌 일반 함수 템플릿
//				  <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// std::find
	// => [first, last) 구간에서 선형검색 수행
	// => first 는 검색에 포함, last 는 검색 안됨, last-1 까지 검색
			
	auto ret1 = std::find(s.begin(), s.end(), 3);


}
