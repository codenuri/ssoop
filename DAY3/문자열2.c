// 문자열.c
#include <stdio.h>

int main()
{
	char sa[] = "abcd"; 

	// #1. *sp = 'x' 의 문제점을 알아야 합니다.
	/*
	char* sp = "efgh";  

	*sa = 'X'; // ok. stack 은 R/W 가능.
	*sp = 'X'; // runtime error. 읽기전용 메모리를 쓰려고 하기 때문에
	*/

	// #2. 문자열 배열이 아닌 문자열 포인터를 사용할때는
	// "char*" 가 아닌 "const char*" 로 하는 것이 좋습니다.
	const char* sp = "efgh";
	*sp = 'X';


	printf("=====\n");
}