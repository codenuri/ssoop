#include <iostream>
#include <vector>
#include <list>
#include <deque>

// STL "모든 컨테이너의 특징"

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	// #1. 제거와 반환을 동시에 하는 멤버 함수는 없습니다.
	// => 안전한 컨테이너를 만들기 위해서 선택한 방법.

	int n = v.back();	// 마지막 요소를 반환만 하고, 제거는 안됨
	v.pop_back();		// 마지막 요소를 제거만 하고, 반환은 안됨

	std::cout << n << std::endl;



	// 2. 컨테이너가 컨테이너를 보관하면 편리한 "자료구조"를 만들수 있습니다.
	std::vector< int > v1(10);

	v1[0] = 10;

	std::vector< std::list<int> > v2(10);

	v2[0].push_back(10);
	v2[0].push_back(20);
	v2[1].push_back(1);
	v2[1].push_back(2);



}
