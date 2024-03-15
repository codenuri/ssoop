#include <iostream>
#include <vector>
#include <list>
#include <deque>

// 컨테이너(Container ) : 여러개의 요소를 보관하는 클래스
//						list, vector, deque 등
//						다른 언어에서는 collection 이라고도 합니다.

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	// #1. 제거와 반환을 동시에 하는 멤버 함수는 없습니다.
	// => 안전한 컨테이너를 만들기 위해서 선택한 방법.
	// => 예외 안전성의 "강력 보장" 이라는 개념을 지원하기 위한 설계

	int n = v.back();	// 마지막 요소(5)를 반환만, 제거되는 것은 아님.
	v.pop_back();		// 제거만 하고, 반환은 안함. 리턴 타입 void

	std::cout << n << std::endl;




	// 2. 컨테이너가 컨테이너를 보관하면 편리한 "자료구조"를 만들수 있습니다.

	std::vector< int > v1(10);

	v1[0] = 10;  	// v1은 int 를 보관하므로
					// v1[0] 의 타입은 int 입니다.

	std::vector< std::list<int> > v2(10);

	v2[0].push_back(0);
	v2[0].push_back(1);

	v2[1].push_back(10);


}
