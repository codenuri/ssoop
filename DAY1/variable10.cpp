#include <cstring>
#include <string>  // C++ 표준의 "std::string" 이라는 타입
#include <iostream>
int main()
{
	// C++ 표준의 문자열 타입(class 라는 문법으로 설계된 타입)
	std::string s1 = "hello";
	std::string s2 = "world";

	// s1, s2 는 이제 정수형 변수처럼 사용가능합니다.
	if ( s1 == s2 ) {} 
	s1 = s2;	

	s1 = s1 + s2;

	std::cout << s1 << std::endl;
}