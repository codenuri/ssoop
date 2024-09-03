#include <iostream>

int main()
{
	//	int score[4]; // 이렇게 하면 필요 없을때 즉시 삭제 안됩니다.

	int size = 4;
	int count = 0;

	int* score = new int[size];


	int n = 0;

	// 사용자가 -1을 입력할때 까지 계속 입력 받고 싶다.
	while (1)
	{
		std::cin >> n;

		if (n == -1) break;

		score[count] = n;
		++count;

		if (count == size)
		{
			// #1. 새로운 메모리(버퍼)할당
			int* tmp = new int[size * 2];

			// #2. 작은 버퍼의 내용을 새로운 버퍼에 복사

			memcpy(tmp, score, sizeof(int) * size);
			// => score 가 "가리키는 메모리 내용" 을
			// => tmp   가 "가리키는 메모리 내용" 으로 복사

		// #3. 이전 버퍼 제거, score 는 새로운 버퍼 사용
			delete[] score; // score 제거가 아닌, 
			// score 가 가리키는 메모리 제거
			score = tmp;

			// #4.
			size = size * 2;
		}
	}

	std::cout << "입력된 갯수       : " << count << std::endl;
	std::cout << "할당된 메모리 크기 : " << size << std::endl;

	// 사용후에는 더이상 사용하지 않을때 버퍼 제거
	delete[] score;
}

// 실행해서 1 ~ 9 까지 입력하고, -1 입력해보세요.. 