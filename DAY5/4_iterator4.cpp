// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너 모든 요소 열거하는 방법
	// 방법 #1. [] 연산자 사용 - list 는 안됨.

	for (int i = 0; i < c.size(); i++)
	{
		c[i] = 0; // c 가 list 라면 에러. 
	}


	// 방법 #2. 반복자(iterator) 사용
	// => 모든 컨테이너에서 사용가능

	auto first = c.begin();
	auto last = c.end();

	while (first != last)
	{
		*first = 0; // 모든 요소에 0넣기
		++first;
	}

	// 방법 #3. C++11 에서 추가된 "range-for" 사용
	// => 결국 아래 코드는 위코드와 완벽히 동일한 코드
	// => 그런데, 훨씬 간결하다. !! 권장
	for (auto& e : c)
	{
		e = 0;
	}
}

