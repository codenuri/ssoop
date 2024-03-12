#include <iostream>
#include <cstring>  
#include <vector>

int main()
{
	int n = 0;
	std::vector<int> v;	// 크기가 자동 증가하는 동적 배열

	while( 1 )
	{
		std::cin >> n;
		if ( n == -1 ) break;
		v.push_back(n);
	}
	
	std::cout << "할당된 버퍼 크기 : " << v.capacity() << std::endl;
	std::cout << "입력된 정수 갯수 : " << v.size()     << std::endl;
}

// C++ 에서 알아야 하는 것
// 1. vector 같은 것을 만들때 사용하는 문법 - class 관련 문법
// 2. 이미 만들어진 표준라이브러리 vector 의 사용법을 배우는 것
//    표준라이브러리 STL ( Standard Template Library )

// 3. std::string 도 "class string" 으로 만들어진것