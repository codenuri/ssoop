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
	std::vector<int> v4(10, 2);
	std::vector<int> v5{10, 2};
	


}
