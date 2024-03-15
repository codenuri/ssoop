#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>   // 수치 관련 알고리즘

int main()
{
	std::vector<int> v = {1,3,5,7,9,2,4,6,8,10};

	std::sort(v.begin(), v.end()); // 정렬

	for( auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl;
	
	int n = std::accumulate(v.begin(), v.end(), 0);

	std::cout << n << std::endl;
	//=====================
	std::string s1 = "abcdefghijk";
	std::string s2 = "def";

	auto ret = std::search( s1.begin(), s1.end(),   // 이구간에서
							s2.begin(), s2.end());  // 이구간의내용을 검색

	// ret 는 누구의 반복자 일까요 ? s1 ? s2 ?

}
