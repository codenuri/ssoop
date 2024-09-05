#include <iostream>

int main()
{
	// std::cout 
	// => std::ostream 이라는  타입의 객체(전역변수)

	// #1. 별명 만들어서 사용해도 됩니다.
	std::ostream& os = std::cout;

	os << "hello" << std::endl;
}