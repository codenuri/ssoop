#include <iostream>

int main()
{
	// std::cout 
	// => std::ostream 이라는  타입의 객체(전역변수)

	// #1. 별명 만들어서 사용해도 됩니다.
	// => 아래 os 는 std::cout 의 별명이므로 사용법 동일
	std::ostream& os = std::cout;

	os << "hello" << std::endl;


	// #2. const 별명을 만들수는 있지만
	//     상수 별명으로는 "operator<<" 사용할수 없습니다
	const std::ostream& cos = std::cout;

	cos << "hello"; // error. 왜 에러일까요 ? 
//  cout.operator<<("hello")  인데, cout 상수 객체 입니다.
	//					      => 그런데, 상수 객체는 상수멤버함수만 호출가능
	//						  => operato<< 은 상수멤버함수 아닙니다.
}