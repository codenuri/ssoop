#include <iostream>
int main()
{
	int n = 0;
	// 이름이 있는데 왜?? 주소로 접근하나요 ?
	// 1. 메모리 해석 방식을 변경하고 싶을때
	
	n = 0x10; // 항상 4바이트 단위로 접근

	char*  p1 = (char*)&n;
	short* p2 = (char*)&n;
	*p1 = 0x20;
	*p2 = 0x33;

	std::cout << n << std::endl;
}
