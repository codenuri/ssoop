#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool is_even(int n) { return n % 2 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	auto ret1 = std::find_if( v.begin(), v.end(), is_even );

	// 람다 표현식 : 익명의 함수를 만드는 문법
	// 			    함수의 이름(주소) 가 전달되는 위치에 함수 구현 자체를 만드는 문법

	// [] : 람다가 시작됨을 알리는 "lambda introducer"
	
	auto ret2 = std::find_if( v.begin(), v.end(),  
					[](int n) { return n % 2 == 0; }     );

}

