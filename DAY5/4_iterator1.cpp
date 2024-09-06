#include <iostream>
#include <vector>
#include <list>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 배열은 연속된 메모리 이므로
	// 배열의 시작 주소를 알면 모든 요소를 열거(++ 사용)할수 있습니다
	int* p1 = x;
	++p1;

	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// list 는 연속된 메모리는 아니지만
	// 반복자(iterator)를 얻으면 모든 요소를 ++로 접근 가능합니다.
	auto p2 = s.begin();

	// p2는 진짜 포인터는 아니지만 포인터처럼 사용하면됩니다.
	++p2;

	std::cout << *p2 << std::endl;

}

