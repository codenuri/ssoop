#include <iostream>

// noexcept 키워드의 2가지 용도
// 1. 함수가 예외가능성이 있는지 조사
// 2. 함수가 예외가능성이 없음을 컴파일러에게 알릴때 사용

void foo() 
{
}
// 모든 함수는 기본적으로 예외 가능성이 있습니다.
// => 개발자가 만든 함수가 예외가 절대 발생하지 않는다면
//    noexcept 를 붙여서 예외가 없음을 컴파일러에게 알리면 좋습니다.
// => 단, 반드시 예외 가능성이 없을때만!!
void goo() noexcept
{
}

int main()
{
	// noexcept( 함수 호출 표현식 ) : 실제 함수가 호출되는 것이 아니라.
	//								"표현식대로 호출했을때" 예외 가능성이 있는지 조사
	bool b1 = noexcept(foo());
	bool b2 = noexcept(goo());

	std::cout << b1 << std::endl; // 0
	std::cout << b2 << std::endl; // 0
}