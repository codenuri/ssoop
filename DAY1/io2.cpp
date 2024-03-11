// 18page
#include <iostream>
#include <iomanip>
// 입출력 조정자(io manipulator)
// => 입출력의 형태를 변경하는 도구
// => 정확한 정체는 대부분 함수
// => <iostream> 또는 <iomanip>

int main()
{
	int n = 10;

	std::cout << n << std::endl; // 10

	std::cout << std::hex << n << std::endl; // a

	std::cout << std::dec << n << std::endl; // 10

	std::cout << std::setw(10) << std::setfill('#') << n << std::endl; // 


	double d = 0.123456789;
	
	std::cout << std::setprecision(10) << d << std::endl; // 몇자리까지 출력되는지 확인해 보세요.
}

// cppreference.com 접속
// => 오른쪽 상단에서 std::setw 검색