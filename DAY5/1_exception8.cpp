#include <iostream>

// noexcept 키워드의 2가지 용도
// 1. 함수가 예외가 있는지 조사
// 2. 함수가 예외가 없음을 컴파일러에게 알릴때 사용

// 1. 모든 함수는 예외 가능성이 있다.
//    (함수 선언만 있을수 있으므로, 컴파일러가 구현을 조사할수는 없다.)

// 2. 함수 제작자가 예외가 없음을 알려야 한다.
//    함수 선언 뒤에 "noexcept" 표기

void foo()
{
}
void goo() noexcept  // 함수 제작자가 예외가 없음을 알리고 있는 코드. 
{
}

int main()
{
	bool b1 = noexcept(foo()); // "foo()" 라고 호출할때(실제호출하는것은 아님)
								// 예외 발생 가능성이 있는지 조사
	bool b2 = noexcept(goo());

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
}