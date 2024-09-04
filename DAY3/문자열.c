// 문자열.c
#include <stdio.h>

int main()
{
	char sa[] = "abcd"; // char sa[5] = {61, 62, 63, 64, 0}
						// 1. stack 에 5 바이트를 할당하고
						// 2. "abcd" 로 채우는 코드

	char* sp = "efgh";  // 1. 컴파일시 실행파일의 .rdata(.rodata) 섹션에
						//   "efgh" 넣기.
						// 2. 실행시 실행파일이 메모리에 올라오는데,
						//    .rdata 영역이 놓은 메모리는 읽기 전용

						// 3. 실행시 스택에 "sp 포인터 변수가 생성되고"
						//    sp 에 "efgh" 문자열이 주소를 넣기


	printf("=====\n");
}