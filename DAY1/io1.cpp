#include <cstdio>	// printf, scanf
#include <iostream> // std::cout, std::cin

// 13 page
int main()
{
	int n = 10;

	// C style 입출력
	printf("n = %d\n", n); // C style
	scanf_s("%d", &n);	   // 입력

	// C++ style
	// 1. %d 등을 사용할 필요 없고
	// 2. << 을 사용해서 계속 출력 가능
	// 3. std::endl 는 개행(\n) 의미.
	// printf    : 함수
	// std::cout : 객체
	std::cout << "n = " << n << std::endl;

	std::cin >> n; // 입력, &n 가 아닌 n 입니다.
}
