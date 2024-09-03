// vector3.cpp 복사
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v; // 크기가 0 인 vector 도 가능.
	int n = 0;

	while (1)
	{
		std::cin >> n;
		if (n == -1) break;
		v.push_back(n); // 자동으로 메모리 증가하면서 넣기
	}
	std::cout << "입력된 갯수       : " << v.size() << std::endl;
}

// C++ 표준에서 class 문법으로 많은 좋은 클래스를 이미 제공합니다.
// => 대부분 template 으로 되어 있습니다
// => "STL" 이라고 합니다. "Standard Template Library"

// => std::string, std::vector, std::list, std::set(tree)
//    std::unordered_set(hash), std::thread, std::second


// C++ 을 통해서

// 1. std::vector 같은 클래스를 만드는 법을 알아야 합니다.
// => 클래스 문법

// 2. std::vector 의 사용법을 알아야 합니다.
// => 라이브러리 활용법.

// 참고 : python 의 list 가 std::vector 와 동일

// s = [1, 1, 1]; // std::vector<int> v(1,3) 과 완전 동일
// s.append(2);   // v.push_back(2)