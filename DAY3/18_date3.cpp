#include <iostream>

// 단일 책임의 원칙(Single Reponsibility Principle)
// => 하나의 클래스는 하나의 책임만!

class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int year, int month, int day) : year{year}, month{month}, day{day} {}

	void print() const
	{
		std::cout << year << "-" << month << "-" << day << std::endl;
	}
	void set_year(int y)  { year = y;}
	int  get_year() const { return year;}

	// 이제 Date 사용자가 좋아할만한 멤버 함수들을 제공하면 됩니다
	bool is_leap_year() const 
	{		
		return is_leap_year(year);
	}

	static bool is_leap_year(int year) 
	{
		// 400 으로 나누어 떨어지거나
		// 4의 배수인데, 100으로 나누어 떨어지지 않으면 윤년
		return (year % 400 == 0) || ( year % 4 == 0 && year % 100 != 0);
	}

};

int main()
{
	Date d1{2024, 3, 12};	

	bool b1 = d1.is_leap_year();

	// 2030년이 윤년인지 조사해 보세요.
	Date d2{2030, 3, 12};	
	bool b2 = d2.is_leap_year();
	bool b3 = Date::is_leap_year(2030);

}













