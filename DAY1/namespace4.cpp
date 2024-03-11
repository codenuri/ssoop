// 10 page

//#include <stdio.h> // printf 가 전역공간에만 있습니다.
#include <cstdio> 	 // printf 가 전역공간, std:: 에 모두 있습니다

// C++ 은 기존의 C 헤더도 계속 지원하고,
// 추가로 C++ 전용 버전도 만들었습니다.

// <xxx.h>		=> 		<cxxx>
// <stdio.h>	=>		<cstdio>
// <stdlib.h>	=>		<?>
// <math.h>		=>		<?>


int main()
{
	// printf 는 C 표준이지만, C++ 표준이기도 합니다.
	printf("hello\n"); // ok
	std::printf("hello\n"); // ??
}
