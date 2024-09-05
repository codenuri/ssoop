#include <iostream>

// copy constructor ( 복사 생성자, 123 page ~ )

class Point
{
	int x, y;
public:
	Point()             : x{ 0 }, y{ 0 } {} // 1 번 생성자
	Point(int a, int b) : x{ a }, y{ b } {} // 2 번 생성자

	// 복사 생성자 : 자신과 동일한 타입의 객체한개를 인자로 가지는 생성자
	// => 사용자가 만들지 않으면 컴파일러가 제공
	// => 컴파일러 버전은 "모든 멤버를 그대로 복사"
	Point(const Point& other) : x(other.x), y(other.y) {}
};

int main()
{
	// 아래 4줄에 대해서 생각해 봅시다.
	Point p1;		// ok.    1번 생성자 호출
//	Point p2(1);	// error. Point(int) 모양의 생성자는 없다
	Point p3(1,2);	// ok.    2번 생성자 호출

	Point p4(p3);   // Point( Point ) 모양의 생성자가 필요 하다.
					// => 이 모양의 생성자를 만든적이 없지만
					// => 이 코드는 에러가 아니다.
					// => 컴파일러가 자동으로 만들어 준다.
					//    "복사 생성자"
}