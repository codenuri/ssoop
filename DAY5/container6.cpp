#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

// C#, Java, Python 등의 대부분의 언어
// => vector 관련 작업을 하고 싶으면 "vector 의 멤버 함수(메소드)" 에서 찾으면 됩니다.

// C++
// 1. 검색, 정렬, 요소합 구하기 등의 일반적인 작업
//    => 멤버 함수가 아닌 일반 함수 입니다. 
//    => "알고리즘" 이라고 부릅니다.
//    => std::find 등

// 2. 컨테이너에 요소삽입/삭제 등  
// 	  => 일반 함수가 아닌 멤버 함수로 제공.
//    => cppreference.com 에서 std::vector 검색해 보세요

int main()
{
	std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

	auto ret = std::find(v.begin(), v.end(), 5);

//	v.erase(ret); // 한개 지우기

	v.erase(ret, v.end()); // 구간 지우기

	for( auto e : v )
		std::cout << e << ", ";
	
}





