// Date.cpp
#include "Date.h"
#include <iostream>

// 핵심 : static 멤버 데이타의 외부선언은 .cpp 위치에.
int Date::days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31,30,31};


Date::Date(int year, int month, int day) 
	: year{year}, month{month}, day{day} 
{
}

void Date::print() const
{
	std::cout << year << "-" << month << "-" << day << std::endl;
}
bool Date::is_leap_year() const 
{		
	return is_leap_year(year);
}

bool Date::is_leap_year(int year) 
{
	return (year % 400 == 0) || ( year % 4 == 0 && year % 100 != 0);
}