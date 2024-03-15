#include <iostream>

class Date
{
private:
	int year;
	int month;
	int day;	
	static int days[12];	

public:
	Date(int year, int month, int day) : year{year}, month{month}, day{day} {}

	void print() const
	{
		std::cout << year << "-" << month << "-" << day << std::endl;
	}
	bool is_leap_year() const 
	{		
		return is_leap_year(year);
	}

	static bool is_leap_year(int year) 
	{
		return (year % 400 == 0) || ( year % 4 == 0 && year % 100 != 0);
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31,30,31};

int main()
{
	Date d1{2024, 3, 12};	

}












