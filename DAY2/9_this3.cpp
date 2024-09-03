class Point
{
	int x, y;
public:
	void set(int a, int b) {}
};

void foo(int a, int b) {}

int main()
{
	void(*f1)(int, int) = &foo;			// ok
//	void(*f2)(int, int) = &Point::set;	// error. 인자가 3개인 함수
										// this call!!!
	// 핵심 1. 일반 함수 포인터 멤버 함수 주소를 넣을수 없습니다.

	// 핵심 2. 아래처럼해야 합니다 "멤버 함수포인터" 라는 문법
	void(Point::*f3)(int, int) = &Point::set;

//	f3(3, 3);	// error. 멤버 함수 이므로 객체가 필요한데.
				// 객체없이 호출하고 있는 코드

//	Point pt;
//	pt.f3(3, 3); // error. Point 안에는 멤버 함수 f3은 없다.

	// 해결책 : pointer to member operator 라는 연산자 사용 ( .* )

//	pt.*f3(3, 3); // error. 연산자 우선순위

	(pt.*f3)(3, 3); // ok. 
}