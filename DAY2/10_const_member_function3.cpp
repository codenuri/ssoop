#include <iostream>

// 동일이름의 상수/비상수 함수를 동시에 제공가능합니다.
class Test
{
public:
	void foo()       { std::cout << "foo" << std::endl; }			// 1
	void foo() const { std::cout << "foo const" << std::endl; }		// 2
};

int main()
{
	const Test ct;	// 상수객체는 상수 멤버 함수만 호출가능
	ct.foo();		// 2번 호출, 2번이 없다면 error

	Test t;			// 비상수 객체는 상수와 비상수 함수 모두 호출가능
	t.foo();		// 1번 호출, 1번이 없으면 2번 호출
}
// 의도 : 객체가 상수 일때와 비상수 일때 다른 구현제공하겠다는것
