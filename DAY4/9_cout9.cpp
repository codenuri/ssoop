#include <iostream>


// scanf, std::cin
// => 모두 입력 버퍼에서 꺼내는 것입니다.
// => 만약 입력버퍼가 비어 있으면
// => "키보드 => 입력버퍼"에 담는 루틴 실행. enter 칠때 종료
int main()
{
	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (std::cin.fail() == true)
		{
			std::cout << "fail !!!\n";

			// 다시입력 받기전에 "입력버퍼 비워야 합니다"
			// C : fflush(stdin), C++ : 아래 코드

			std::cin.clear(); // 1. cin 이 가진 state 멤버를 reset 하고
			std::cin.ignore();// 2. 입력버퍼를 비우고,

			continue;		  // 다시 시도
		}
		break;
	}
	std::cout << n; 
}