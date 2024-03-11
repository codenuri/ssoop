#include <iostream>

// 58page

int main()
{
	int n1 = 10;

	// 핵심 : reference 는 기존 변수(메모리)에 대한 
	//		 별명(alias) 입니다.
	// 만드는 법 알아 두세요
	int& r1 = n1;

	r1 = 30;

	std::cout << n1  << std::endl; // 30
	
	std::cout << &r1 << std::endl; // 이 결과와
	std::cout << &n1 << std::endl; // 이 결과는 결국 동일합니다.

}



