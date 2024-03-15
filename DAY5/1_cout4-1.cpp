#include <iostream>

int main()
{
	// std::cout 은 결국 객체입니다.
	// => reference 문법으로 별명 만들어 사용해도 됩니다.
	std::ostream& r1 = std::cout;

	r1 << "hello\n"; // std::cout << "hello\n";


	// 주의 사항
	// => const reference 로 만들면 << 사용안됩니다.
	const std::ostream& r2 = std::cout;
	r2 << "hello\n"; // error.
					// r2.operator<<() 인데..
					// r2 는 const 이므로 상수 멤버 함수만 호출가능합니다.
					// 그런데, operator<<() 는 상수 멤버 함수 아닙니다.
}