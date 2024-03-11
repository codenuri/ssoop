// string
// 32 page

#include <cstring>

int main()
{
	// C언어 문자열 : char 배열 또는 char*
	char s1[] = "hello";
	char s2[] = "world";

	if ( s1 == s2 ) {} // error 는 아니지만 문자열 비교가 아닌 주소비교
						// 항상 false
						// strcmp(s1, s2) == 0

	s1 = s2;	// error.
				// 의도 대로 하려면 strcpy(s1, s2)
}