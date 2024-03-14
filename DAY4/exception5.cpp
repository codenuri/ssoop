#include <iostream>

// noexcept 키워드의 2가지 용도
// 1. 함수가 예외가 있는지 조사
// 2. 함수가 예외가 없음을 컴파일러에게 알릴때 사용

void foo() 
{
}
void goo() 
{
}

int main()
{
	bool b1 = noexcept(foo());
	bool b2 = noexcept(goo());
}