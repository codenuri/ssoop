#include <iostream>

// 104page 멤버 함수 의 종류

// => static 멤버 함수


// => non-static 멤버 함수
// ====> implicit object parameter ( C++98, this 가 컴파일러에 의해 추가)
// ==========> const member function
// ==========> non-const member function
// 
// ====> explicit object parameter ( C++23, this 를 직접 인자로 받는 것)

//---------------------------------------

class Point
{
public:
	int x, y;

	Point(int a, int b) : x{a}, y{b} {}

	void set(int a, int b) { x = a; y = b; }

	// const member function
	// 1. 멤버 함수 뒤쪽에 const 를 붙이는 문법. 
	// 2. const 멤버 함수에서 멤버 데이타를 수정할수 없다.
	// 3. 상수객체라도 const member function 은 호출할수 있다.
	// 원리 : this 가 const Point* 로 받는것

//	void print()		// void print(Point* this)
	void print() const  // void print(const Point* this)
	{	
//		x = 10; // error. 상수 멤버 함수는 멤버 데이타 수정 안됨

		std::cout << x << ", " << y << std::endl;
	}
	
}; 
int main() 
{
//	Point p(1, 2);
	const Point p(1, 2); // 핵심!! 아래 3줄을 생각해보세요

	p.x = 10;		// error. public 이지만 p가 상수객체이므로
	p.set(10, 20);	// error.
	p.print();		// error
					// 단, print 가 상수 멤버함수라면 가능
}

// 핵심 #1. 상수 객체는 non-const 멤버 함수를 호출할수 없다.
// 핵심 #2. 상수 객체는 const 멤버 함수를 호출할수 있다.
