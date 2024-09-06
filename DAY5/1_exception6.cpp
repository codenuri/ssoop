#include <iostream>

// 예외가 발생해서 catch 로 이동할때
// => 중간에 만들어진 모든 지역변수는 안전하게 파괴 됩니다.
// => stack unwinding ( 스택 풀기 )라고합니다.

// 주의 : 소멸자는 절대 예외를 던지면 안됩니다.

class Point
{
public:
	~Point() 
	{ 
		std::cout << "~Point\n"; 
//		throw 1;
	}
};

void goo()
{
	Point p2;
	throw 1; 
	std::cout << "goo\n";
}
void foo()
{
	Point p2;
	goo();
	std::cout << "foo\n";
}
int main()
{
	try
	{
		foo();
	}
	catch (int e) {}
}