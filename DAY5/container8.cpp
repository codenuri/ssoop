#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v1; 		// size = 0,    capacity = 0
	std::vector<int> v2(1000);	// size = 1000, cpapcity = 1000
	std::vector<int> v3;
	v3.reserve(1000);		    // size = 0,    capacity = 1000

	v1.push_back(0);	// 메모리 재할당, 한개 메모리 할당됨.
	v2.push_back(0);	// 메모리 재할당, 2000개 메모리 할당
	v3.push_back(0);	// 메모리 재할당 안하고, 기존 1000개 에 1번째 요소에 넣기

	// 실행하지 말고, 아래 3줄 결과 예측하세요
	std::cout << v1.size() << ", " << v1.capacity() << std::endl; // 1, 1
	std::cout << v2.size() << ", " << v2.capacity() << std::endl; // 1001, 2000
	std::cout << v3.size() << ", " << v3.capacity() << std::endl; // 1, 1000


}

