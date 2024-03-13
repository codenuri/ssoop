#include <iostream>

// 월별 날짜수 관리
//int days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31,30,31};

class Date
{
private:
	int year;
	int month;
	int day;
	
	static int days[12];	// 이런 데이타를 static 으로 만들게 됩니다.

public:
	Date(int year, int month, int day) : year{year}, month{month}, day{day} {}

	void print() const
	{
		std::cout << year << "-" << month << "-" << day << std::endl;
	}
	void set_year(int y)  { year = y;}
	int  get_year() const { return year;}

	bool is_leap_year() const 
	{		
		return is_leap_year(year);
	}

	static bool is_leap_year(int year) 
	{
		return (year % 400 == 0) || ( year % 4 == 0 && year % 100 != 0);
	}

	Date tomorrow()  const 
	{
		Date tmp{year, month, day + 1};

		if ( tmp.day  > days[month-1] )
		{
			tmp.day = 1;
			tmp.month = tmp.month + 1;
			if ( tmp.month == 13)
			{
				tmp.month = 1;
				tmp.year = tmp.year + 1;
			}
		}
		return tmp;
	}

	static int how_many_days(int month, int year = -1 )
	{
		if ( month == 2 && year != -1 )
		{
			return days[month-1] + is_leap_year(year);
		}
		return days[month-1];
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31,30,31};

int main()
{
	Date d1{2024, 3, 12};	

	// 5월달이 몇일까지 있는지 알고 싶다.
	// => static 으로 할까요 ? non-static 으로 할까요 ?
	int ds = Date::how_many_days(5);
	int ds = Date::how_many_days(2, 2024);


	// 나중에 복습하실때 아래 멤버 함수 구현해 보세요
	// => 회사에 입사한후 1000일이 되면 "여행상품권" 을 받게 된다.!!
	// => 1000일뒤의 날짜를 알고 싶다.
	// => static 으로 할까요 ? non-static 으로 할까요 ?
	// => "기준이 되는 날짜(객체)" 가 필요 합니다. - non static

	Date d2{2024, 3, 12};
	Date d3 = d2.after_days(1000);  // 복습할때 구현해 보세요.
}













