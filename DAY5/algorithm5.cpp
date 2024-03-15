// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };
		
	// 주어진 구간에서 3을 -1로 변경
	std::replace( v.begin(), v.end(), 3, -1 );
						// 1,2,9,4,-1,6,7,-1,9,10
	 

	// v에서 "짝수"를 0으로 변경해 보세요 - 람다 표현식 사용해 보세요
	

	for (auto e : v)
		std::cout << e << ", ";
}