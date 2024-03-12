#include <iostream>

// this 활용

class Point
{
	int x, y;
public:
	// #1. 
	void set(int x, int y) 
	{
		x = x;	// 함수인자 x = 함수 인자x;

		// this 활용 1. 멤버 데이타 임을 명확히 하기 위해
		this->x = x;

	}

	// #2. this 를 반환
	// => 멤버 함수가 this 를 반환하면 멤버 함수 호출을 연속적으로 할수 있습니다.
	Point* foo() { return this; }
	Point& goo() { return *this; }
};
int main()
{
	Point p1;
	
	p1.set(10, 20);

	p1.foo()->foo()->foo();
	p1.goo().goo().goo();

	std::cout << "A" << "B" << "C" << "D";
	// cout.operator<<("A").operator<<("B").operator<<("C");
}
