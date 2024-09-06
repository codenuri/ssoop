#include <iostream>
#include <vector>

// () 와 {} 차이

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int> v2 { 1,2,3,4,5 };
	std::vector v3{ 1,2,3,4,5 };      // C++17 부터는
									  // 초기값이 있으면타입생략가능
	
	// 아래 코드 주의 하세요!!
	std::vector<int> v4(10, 2); // 10개를 2로 초기화
	std::vector<int> v5{10, 2}; // 2개를 10, 2로 초기화
	

	// 위내용은 vector 뿐아니라, list, deque 도 모두 적용되는 이야기.

}
