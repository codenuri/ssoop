// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너 모든 요소 열거하는 방법

	// #1. range-for 사용 - 권장! (단, 전체 요소 열거)
	for( auto e : c )
		std::cout << e << ", ";

	std::cout << std::endl;
	//-------------------------------------------
	// 일부 구간만 열거 하려면
	// #1. legacy-for 와 [] 연산자
	// => 단, [] 연산은 vector 만 가능, list 안됨.
	for( int i = 3; i < 7; i++)
		std::cout << c[i] << ", ";

	// #2. 반복자 사용해서 열거 - 권장, 모든 컨테이너 가능
//	auto first = c.begin();
//	auto last  = c.end();

	auto first = std::next( c.begin(), 3);
	auto last  = std::prev( c.end(), 3);


	while( first != last )
	{
		std::cout << *first << ", ";
		++first;
	}

	
}






