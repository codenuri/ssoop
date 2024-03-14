#include <iostream>

// 아래 함수를 라이브러리 내부 함수라고 생각해 봅시다.
template<typename T>
void some_work( T f = nullptr )
{	
	// 이 함수는 너무중요한 일을 하므로 절대 오류가 발생하면 안된 다고 가정.

	if ( f != nullptr && noexcept( f() ) )
	{
		f();
		std::cout << "사용자가 전달한 안전한 알고리즘\n";
	}
	else
	{
		std::cout << "느리지만 안전한 알고리즘\n";
	}
}


void foo() 
{
}

void goo() noexcept
{
}

int main()
{
	some_work();      // 기본 알고리즘 사용
	some_work( foo ); // foo 전달했지만, 예외 가능성 있는 함수, 사용안함
	some_work( goo ); // goo 안전한 함수, 사용
}