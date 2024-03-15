#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v(10, 0); // 10개를 0으로

	v.resize(7);	// 7 개로 줄이기


	std::cout << v.size() << ", " << v.capacity() << std::endl; // 7, 10


	v.push_back(0); // 끝에 한개 추가!!
					// 현재 상태가 size < capacity 인 상태 이므로
					// 아주 빠르게 동작합니다. "not expensive" 라고 표현.

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 8, 10


	v.shrink_to_fit(); // 필요없는 여분의 메모리 제거
					   // => 8개 메모리를 다시 확보에서 요소를 복사한후
					   // => 기존 10개 메모리는 제거 하는 것

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 8, 8	

	v.push_back(0); // 끝에 한개 추가
					// 현재 상태는 size == capacity 상태이므로
					// 메모리 재할당 필요
					// 느리다. "expensive" 한 연산	

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 8, 16
									// 메모리 재할당시 
									//  g++ : 2배 증가	
									//  vs  : 1.5배							   

	v.clear(); // 모든 요소를 제거해 달라.
	std::cout << v.size() << ", " << v.capacity() << std::endl; // 0, 16

	v.shrink_to_fit();
	std::cout << v.size() << ", " << v.capacity() << std::endl; // 0, 0
}