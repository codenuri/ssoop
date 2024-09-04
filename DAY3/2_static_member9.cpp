
// Car.h
class Car
{
public:
	static int cnt;		// non- const static
						// => 소스에 정의 필요하고
						// => 초기화도 정의부에서

	static const int cnt2 = 0;	// static const
								// 소스에 정의부 필요 없습니다.
								// 초기화도 여기에서 
};

extern int x; // 전역변수에 대한 선언.
const int c = 0; // const 전역변수는 헤더에 구현.


// Car.cpp
int Car::cnt = 0;

int x = 0; // 일반전역변수