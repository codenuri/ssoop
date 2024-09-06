#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int a) { return a % 3 == 0; }


int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// 주어진 구간에서 "3의 배수"를 찾는 코드
	auto ret1 = std::find_if(v.begin(), v.end(), foo);


	// 주어진 구간에서 "사용자가 입력한 k의 배수 "를 찾는 코드를 만들려면
	int k = 3; // 사용자 입력이라고 가정

	auto ret2 = std::find_if(v.begin(), v.end(), foo);


}