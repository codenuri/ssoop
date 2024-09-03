#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "학생수를 입력하세요 >> ";
	std::cin >> cnt;

	// 입력된 학생수 만큼, 다시 점수를 입력 받아야 한다.
//	int score[cnt]; // g++ 가능, vs 안됨
					// 또한, score 가 더이상 필요 없을때
					// 즉시, 삭제 안됨. {} 벗어나야 파괴

	// 모든 환경에서 되도록 하려면 "동적할당" 밖에 안됩니다.
	int* score = new int[cnt]; // 변수 가능.

	std::cin >> score[0];

	delete[] score; // 사용후에는 제거.. 
}