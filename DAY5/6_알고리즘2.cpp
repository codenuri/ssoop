// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// STL 알고리즘 사용법
// => 멤버 함수가 아닌 일반함수
// => 대부분 std::알고리즘이름(시작반복자, 마지막다음반복자) 입니다.

int main()
{
	std::vector<int> v = { 1,2,3,4,3,6,7,3,9,10 };

	// 뒤집는 알고리즘은 std::reverse() 입니다.
	
//	std::reverse( v.begin(), v.end()  );


	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;

	// 조건에 맞는 요소를 변경하는 알고리즘은 std::replace() 입니다.
	// v 에서 3을 -1로 변경해 보세요.  
	// ?
	
	std::replace( v.begin(), v.end(), 3, -1    );


	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;
}