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
	}

	// #2.setter/getter 제공. 
	int get_year() const { return year; }


};

int main()
{

}