#include <iostream>

// 프로그램에서 "날짜"를 사용해야 합니다.
// => Date 라는 타입이 있으면 편리합니다
// => SRP(Single Responsibility Priciple) : 한개의 클래스는 한개의 책임

class Date
{
	int year;
	int month;
	int day;
	
	// 핵심 : 아래 멤버를 static 으로 하는 이유를 알아야 합니다.
	static int days[12];

public:
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day } 	{ }

	int get_year() const { return year; }
	void set_year(int y) { if (y > 0 && y < 3000) year = y; }

	// 이제 사용자들이 필요로 하는 유용한 멤버 함수를 제공하시면 됩니다.
	Date after_days(int ds)
	{
		Date ret{ year, month, day + ds };

		return ret;
	}

	static int how_many_days(int m, int y = -1)
	{
//		if (y != -1 && y 가 윤년이면 && m == 2)
//			return days[m] + 1;
		return days[m];
	}
};

// 월별 날짜수(복습할때 맞게 고쳐서 해보세요
int Date::days[12] = { 31,28, 31,30,30,30,30,30,30,30,30,30 };

int main()
{
	Date today{ 2024, 9, 4 };

	Date d = today.after_days(1000);

	// 5월이 몇일까지 있는지 알고 싶다.
//	Date d2(2024, 5, 1);
//	int days1 = d2.how_many_days(); // 객체를 만들고 호출하는 것보다는
	int days2 = Date::how_many_days(5); // 이코드가 좋습니다. static 멤버 함수

	
	// 내일 날짜를 알고 싶다
	// => "내일을 구하려면 기준일(객체)"가 있어야 합니다.
	// => non-static 이어야 합니다.
	Date d3 = today.tomorrow();

	// 윤년인지 조사하는 is_leap_year() 를 만들려고 합니다.
	// static 으로 할까요 ? non_static 으로 할까 ?
	// => 2개 만드시면 됩니다
	// => 복습할때 구현해 보세요.. 
	bool b1 = today.is_leap_year(); // today 안에 있는 year 가 윤년인가 ?
	bool b2 = Date::is_leap_year(2025); // 2025 년이 윤년인가 ?
}
