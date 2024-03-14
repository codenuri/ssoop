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
	// 장점 : 사용하기 쉽다.
	// 단점 : 컨테이너가 10개 라면 10개의 클래스에 모두 만들어야 한다.
	// => 동일한(유사한) 로직을 가지는 코드(함수)를 10개 만들어야 한다.
	// => C++ 표준 라이브러리 설계시 "이 단점" 때문에 이방식을 선택하지 않음.
//	s.find(3);
//	v.find(3); 


	// 방법 2. find 를 멤버가 아닌 일반 함수(템플릿)으로 제공하자.
	// => STL 이 선택한 방법
	// => list 와 vector 는 내부 자료구조가 다르지만
	// => 반복자 덕분에 동일한 방식으로 이동 가능하다.
	// => 따라서 std::find() 는 반복자를 인자로 받으면 모든 컨테이너에 대해서
	//    동일한 방식으로 이동해서 "선형검색" 수행
	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);
}

// 알고리즘 의 일반적의미    : 문제를 해결하는 방법
// STL 라이브리에서 알고리즘 : std::find 같은 멤버가 아닌 일반 함수(템플릿)

// STL 의 3대요소
// 1. Container : std::vector, std::list 등 자료구조를 클래스로 만든것
// 2. Iterator(반복자)
// 3. Algorithm

