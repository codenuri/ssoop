#include <iostream>

// this 활용

class Point
{
	int x, y;
public:
	// #1. 멤버 데이타 접근임을 명확히 하고 싶을때
	void set(int x, int y) 
	{
//		x = x;	// 인자의x = 인자의x
		this->x = x;
	}

	// #2. this 를 반환
	// => 멤버 함수 호출을 연속적으로 할수 있습니다.
	// => std::cout 의 원리
	// => java 진영에서는 아주 널리 사용되어서 "builder" 라는 이름도 있는 패턴
	//	  (디자인패턴의 "builder" 가 아닌, java 진영에서의 다른 기법)
	Point* foo() { return this; }
	Point& goo() { return *this; }
};
int main()
{
	Point p1;
	p1.set(10, 20);

	p1.foo()->foo()->foo();

	p1.goo().goo().goo();

	std::cout << "A" << "B" << "C";
	// std::cout.operator<<("A").operator<<("B").operator<<("C")

}
