// 14_std_vector1.cpp
#include <iostream>
#include <vector>

int main()
{
	int x[5] = {1,2,3,4,5};

	// 1. C 배열의 특징(단점) : 크기를 변경할수 없습니다.

	// 2. 크기 변경이 가능한 배열이 필요 하면
	// => C언어 : vector4.cpp 처럼 직접 만들어야 합니다.
	//           재사용가능한 함수로 분리하는 것이 깔끔하지 않습니다.

	// => 객체지향 언어 : 클래스 문법으로 vector 같은 클래스를 만들면 됩니다.
	//	                 또한 이미 표준 라이브러로 클래스가 만들어져 있습니다.
	//					C++, java : vector 있습니다.
	//					Python    : list 타입    s = [1,2,3]
	//				    C#        : ArrayList

	// C++ 표준 vector 사용하기
	std::vector<int> v1(4, 0); // 4개를 0으로 초기화

	v1.at(0) = 3; // 이렇게 해도 되고
	v1[0] = 5;	  // 이 코드도 가능

	v1.resize(8);


	std::vector<int> v2; // 초기 에는 크기 없는 vector

	v2.push_back(1); // 이순간 자동으로 크기 증가
}