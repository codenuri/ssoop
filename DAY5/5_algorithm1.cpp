// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너에서 3을 찾고 싶다.

	// 방법 1. 멤버함수 find를 제공하자.
	// 장점 : 사용법 이 쉽습니다.
	// 단점 : 모든 컨테이너에 find 멤버 함수 만들어야 합니다.
	s.find(3);
	v.find(3); 


	// 방법 2. find 를 멤버가 아닌 일반 함수(템플릿)으로 제공하자.
	// 장점 : 한개의 find 로 모든 컨테이너에 사용가능
	// 단점 : 복잡해 보인다.
	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);
}

// STL 의 원리는 2번 입니다.!!
// => 하나의 find 로 모든 컨테이너에 사용하자.
