#include <stdio.h>

int main()
{
	char sa1[] = "hello";
	char sa2[] = "hello";

	const char* sp1 = "hello";
	const char* sp2 = "hello";

	// 아래 결과 예측해 보세요
	// 같은 주소 ? 다른 주소 ?
	printf("%p, %p\n", sa1, sa2);
	printf("%p, %p\n", sp1, sp2);
}	