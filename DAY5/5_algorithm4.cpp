#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


bool foo(int a) { return a % 3 == 0; }


int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };


	auto ret1 = std::find_if(v.begin(), v.end(), foo);

	// 람다 표현식 : 함수이름이 필요한 자리에
	//				함수구현 자체를 표기하는 문법 ( C++11 )
	//				"익명의 함수"를 만드는 문법

	// [] : lambda introducer ( 람다표현식이 시작됨을 알리는 기호 )

	auto ret2 = std::find_if(v.begin(), v.end(), [](int a) { return a % 3 == 0; } );


	if (ret2 == v.end())
	{
	}
	else
	{
		std::cout << *ret2 << std::endl; // 9 
	}

}