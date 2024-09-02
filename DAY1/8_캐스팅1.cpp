// 10_캐스팅1.cpp    49 page
#include <iostream>

int main()
{
	int n = 3;

	// #1. 포인터와 명시적 캐스팅
	int*  p1 = &n;	// ok
//	char* p2 = &n;	// C언어 ok. C++ 에러. 즉, 암시적 형변환 안됨
	char* p2 = (char*)&n; // C++ 이라도 ok.

	// #2. 왜 int 변수의 주소를 char* 에 담는가?
	// 의도는 무엇인가 ?
	// => 메모리 해석방식을 변경하겠다는것 
	// => 4바이트(int) 할당했지만, 1바이트 단위(char*)로 접근하겠다는것
	int  n2 = 0x11223344;
	int* p3 = &n2;
	char* p4 = (char*)& n2;

	printf("%x\n", *p3); // 11223344
	printf("%x\n", *p4); // 44

}
