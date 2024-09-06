#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,3,9,10 };

	// 아래 코드는 "앞 => 뒤" 순서로 검색
	auto ret1 = std::find(s.begin(), s.end(), 3);

	//"뒤 => 앞" 순서로 검색하려면 ?
	auto ret2 = std::find(s.rbegin(), s.rend(), 3);
}
