#include <iostream>

// 프로그램에서 "날짜"를 사용해야 합니다.
// => Date 라는 타입이 있으면 편리합니다
// => SRP(Single Responsibility Priciple) : 한개의 클래스는 한개의 책임

class Date
{
	int year;
	int month;
	int day;
public:
	// #1. 생성자
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day }
	{
		// year = year; // 인자year = 인자year
		// 하지만 위 초기화 리스트에서는 문제 없습니다.
	}

	// #2.setter/getter 제공. 
	int get_year() const { return year; }
	void set_year(int y) { if (y > 0 && y < 3000) year = y; }

	// month, day 는 복습할때 해보세요
};

int main()
{
	Date today{ 2024, 9, 4 };
}