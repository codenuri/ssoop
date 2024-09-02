// 1_레퍼런스.cpp    57 page

#include <iostream>

int main()
{
	int n1 = 10;

	int& r1 = n1;
	// 타입& r1 = 다른변수;

	r1 = 30; // 결국 n1 = 30

	std::cout << n1  << std::endl; // 30
	
	std::cout << &r1 << std::endl;
	std::cout << &n1 << std::endl; // 위와 동일 주소

}



