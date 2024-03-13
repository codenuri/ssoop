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

};

int main()
{
	Date d1{2024, 3, 12};	// #1. 생성자 만드세요

	d1.print();				// #2. "2024-3-12" 로 출력되게 하세요

	d1.set_year(2022);		// #3. setter/getter
	int y = d1.get_year();

}













// int days[12] = { 31, 28, 31, 30, 31, 30,  31, 31, 30, 31,30,31};
