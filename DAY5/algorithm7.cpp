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
}
