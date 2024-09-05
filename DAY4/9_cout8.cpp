#include <iostream>

int main()
{
	int n = 0;

	std::cin >> n; // 'a' 를 입력하면

	std::cout << n; // 어떻게 될까요 ?
					// 0, -1, 11, 97  ==> 답은 0, 실패, 
					// 기존값 변화 없음. 
}