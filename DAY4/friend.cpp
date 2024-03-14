#include <iostream>

// friend 문법 - 75 page

// 1. 멤버 함수로 만들면 되는데, 왜 일반함수로 만들고, friend 등록하나요 ?
// => 멤버로 만들수 없는 경우가 있습니다 - 주로 연산자 재정의 에서

// 2. set/get 을 만들면 되지 않나요 ?
// => set/get 을 만드는 것은 모든 곳에서 접근 가능..
// => friend 등록은 "친구에게만 권한 부여"

// 3. 캡슐화를 위배 하므로 나쁜 거 아닌가요 ?
// => 비판을 많은 문법, C++ 에만 존재..

class Bike
{
private:
	int gear = 0;
	
public:
//	void set_gear(int n) { gear = n; }

	// class 안에 friend 함수 등록
	// => fix_bike가 멤버 함수는 아니지만 "친구" 이므로 private 멤버 접근 가능
	friend void fix_bike();
};

void fix_bike()
{
	Bike b;
	b.gear = 10; // ok
}




int main()
{
	fix_bike();
}