// 문자열.c
#include <stdio.h>

int main()
{
	char sa[] = "abcd"; 

	char* sp = "efgh";  

	*sa = 'X'; // ok. stack 은 R/W 가능.
//	*sp = 'X'; // runtime error. 읽기전용 메모리를 쓰려고 하기 때문에


	printf("=====\n");
}