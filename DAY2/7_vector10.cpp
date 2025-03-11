#include <iostream>
#include <vector> // 이 안에 C++ 표준 vector 가 있습니다.
				  // 원리는 우리가 만든것과 유사합니다.

// STL
// => Standard Template Library
// => C++ 표준 라이브러리가 대부분 template 이라서 이렇게 부릅니다.

int main()
{
	std::vector<int> v1(4, 0);

	v1[0] = 10;
	v1.at(0) = 10;	 // 위와 동일. 우리가 만든것과 동일

	v1.resize(8);

	v1.push_back(0); // 이순간 size 는 9개
					 // 하지만 메모리 자체의 크기는 g++ 2배
					 // vc : 1.5배

	std::cout << v1.size() << std::endl; // 9개
	std::cout << v1.capacity() << std::endl; // 12개
											 // g++ 은 16
}