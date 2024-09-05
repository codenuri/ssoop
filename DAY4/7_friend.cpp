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

