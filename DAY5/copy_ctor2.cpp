#include <iostream>

class Point
{
	int x, y;
public:
	Point()             : x{0}, y{0} {} // 1
	Point(int a, int b) : x{a}, y{b} {} // 2

	Point(const Point& p) : x{p.x}, y{p.y}
	{
		std::cout << "copy ctor" << std::endl;
	}
};

void f1(Point  p) {} 
void f2(Point& p) {} 

Point pt(1, 1);

Point  f3() { return pt; }	// return by value : 복사본 반환					  
Point& f4() { return pt; }  // return by reference : 복사본 아닌 pt 별명 반환

int main()
{
	Point p1{1,2};		

	// 복사 생성자가 사용되는 3가지 경우
	// #1. 객체가 자신과 동일한 타입으로 초기화 될때
//	Point p2 = p1;
//	Point p3 = {p1};
//	Point p4{p1};

	// #2. 함수 인자로 call by value 를 사용할때
//	f1(p1); // "Point p = p1" 의 형태로 받게 되므로 "복사생성자 사용"
//	f1(p2); // "Point& p = p1" 이므로 객체를 생성하는 것이 아니라
			// 				별명만든것 "복사 생성자 호출 안됨"

	// #3. 함수가 객체를 값으로 반환 할때
	// => 복사본이 생성되어서 반환됩니다.
	// => 복사본 만들때 복사 생성자 사용

//	f3();	// return pt 에서 "pt" 가 반환된것이 아니라
			// 복사본이 반환된것. 
			// 복사본 만들때 복사 생성자 사용!
	f4();		
}