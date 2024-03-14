#include <iostream>

class Point
{
	int x;
	int y;
public:

	virtual void foo() {}
};

int main()
{
	Point pt;

	// sizeof : pt 객체(변수)가 사용하면 메모리 크기를 구하는 연산자
	std::cout << sizeof(pt) << std::endl;
}