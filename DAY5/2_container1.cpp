#include <iostream>
#include <vector>

// STL Container ( 184 ~ )

int main()
{
	int x[5] = { 1,2,3,4,5 };

	std::vector<int> v = { 1,2,3,4,5 };

	// 배열과 vector
	// => 연속된 메모리에 데이타를 보관하고
	// => [] 연산자로 요소 접근 가능
	x[0] = 0;
	v[0] = 0;

	// 배열   : 크기를 변경할수 없다.
	// vector : 크기를 변경할수 있고, 다양한 멤버 함수가 있다.

	v.resize(20);

	auto sz = v.size();

	// 메모리 위치(지역변수로 만든 경우)
	// 배열   : 모든 데이타가 stack 메모리
	// vector : v는 stack 에 있지만 데이타는 힙에. 

	// heap/stack : 접근 속도는 비슷하지만
	//			    할당/해지 는 stack 이 아주 빠릅니다.
}