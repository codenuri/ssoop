#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
bool is_even(int n) { return n % 2 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// #1. v에서 처음 나오는 짝수를 찾아서 출력해 보세요. 검색 실패도 출력해 보세요
	auto ret1 = std::find_if( v.begin(), v.end(), is_even );


	// #2. "3번째(9)요소 ~  8번째 요소(3, 포함)" 에서 짝수 검색해 보세요 
	auto first = std::next(v.begin(), 2);
	auto last = std::prev(v.end(), 2);

	auto ret2 = std::find_if( first, last, is_even );

	if ( ret2 == last )
		std::cout << "검색 실패\n";
	else 
		std::cout << "검색 성공 : " << *ret2 << std::endl; // 4
}
