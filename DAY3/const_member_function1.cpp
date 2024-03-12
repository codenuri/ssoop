#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x{a}, y{b} {}

	void set(int a, int b)  { x = a; y = b; }

	// 상수 멤버 함수 ( const member function )
	// => 멤버 함수안에서 멤버 데이타의 값을 변경하지 않을것 이라는 약속
	// => 멤버 데이타를 수정하는 코드가 있으면 에러
	// => 상수 객체는 상수 멤버 함수만 호출 가능하다.
	void print() const 
	{	
//		x = 10; 	// error

		std::cout << x << ", " << y << std::endl;
	}
}; 
int main() 
{
//	Point p(1, 2);

	// 핵심 : p 는 상수 객체 입니다.
	const Point p(1, 2);

	p.x = 10;		// error. x 는 public 이지만, 상수 객체 이므로.

	p.set(10, 20);	// error.

	p.print();		// error. 
					// 단, print() 가 상수 멤버 함수라면 ok... 
}
// 핵심 : 상수 객체는 상수 멤버 함수만 호출 가능하다.
