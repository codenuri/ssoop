#include <iostream>

// friend 문법 - 79 page

class Bike
{
private:
	int gear = 0;
	
public:
//	void set_gear(int n) { gear = n; }


	// friend 선언
	// => 멤버 함수는 아니지만 private 멤버에 접근을 허용해 달라. 
	friend void fix_bike();

	// 1. 멤버로 하면 되는데 왜?? 일반함수로?
	// => 멤버로 만들수 없을때가 있습니다.

	// 2. set_gear() 를 만들면 안되나요 ?
	// => set_gear()를 만들면 모든 곳에서 접근 가능
	// => friend 는 "특정함수 한개"만 접근 허용

	// 3. 캡슐화 위배(데이타 보호)되지 않나요 ?
	// => 많은 비판이 있고, 오직 C++에만 존재하는 문법
	// => 이론상 나쁜 문법이지만, 실전에서는 편리하게 사용되는 문법. 
};

void fix_bike()
{
	Bike b;
	b.gear = 10; // ok.
}

int main()
{
	fix_bike();
}

