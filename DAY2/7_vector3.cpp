#include <iostream>

int main()
{
//	int score[4]; // 이렇게 하면 필요 없을때 즉시 삭제 안됩니다.

	int size = 4;
	int* score = new int[size];
	int count = 0;

	int n = 0;

	// 사용자가 -1을 입력할때 까지 계속 입력 받고 싶다.
	while (1)
	{
		std::cin >> n;

		if (n == -1) break;

		score[count] = n;
		++count;
	}

}