// memory.cpp
#include <stdio.h>

int g = 0x11223344;

int main()
{
	static int s = 0x55667788;

	int n = 10; // 스택에서 메모리를 할당하고
				// 10으로 채우는 기계어 코드

	printf("hello\n");

	printf("함수 주소 : %p\n", &main);
	printf("전역변수 주소 : %p\n", &g);
	printf("지역변수 주소 : %p\n", &n);

//	const char* sp = "abcd";
//	char sa[] = "abcd";
}

// 복습할때
// 1. 위코드를 32비트(x86) 으로 빌드후
// 2. 인터넷에서 Peview.exe 를 구하세요
// 3. PEView 에서 열어 보세요

// 윈도우에서 .exe 을 "PE 포맷" 이라고 합니다.
// 리눅스    "ELF" 라고 합니다.