#include <iostream>

// ���α׷����� "��¥"�� ����ؾ� �մϴ�.
// => Date ��� Ÿ���� ������ �����մϴ�
// => SRP(Single Responsibility Priciple) : �Ѱ��� Ŭ������ �Ѱ��� å��

class Date
{
	int year;
	int month;
	int day;
	
	// �ٽ� : �Ʒ� ����� static ���� �ϴ� ������ �˾ƾ� �մϴ�.
	static int days[12];

public:
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day } 	{ }

	int get_year() const { return year; }
	void set_year(int y) { if (y > 0 && y < 3000) year = y; }

	// ���� ����ڵ��� �ʿ�� �ϴ� ������ ��� �Լ��� �����Ͻø� �˴ϴ�.
	Date after_days(int ds)
	{
		Date ret{ year, month, day + ds };

		return ret;
	}

	static int how_many_days(int m, int y = -1)
	{
//		if (y != -1 && y �� �����̸� && m == 2)
//			return days[m] + 1;
		return days[m];
	}
};

// ���� ��¥��(�����Ҷ� �°� ���ļ� �غ�����
int Date::days[12] = { 31,28, 31,30,30,30,30,30,30,30,30,30 };

int main()
{
	Date today{ 2024, 9, 4 };

	Date d = today.after_days(1000);

	// 5���� ���ϱ��� �ִ��� �˰� �ʹ�.
//	Date d2(2024, 5, 1);
//	int days1 = d2.how_many_days(); // ��ü�� ����� ȣ���ϴ� �ͺ��ٴ�
	int days2 = Date::how_many_days(5); // ���ڵ尡 �����ϴ�. static ��� �Լ�

	
	// ���� ��¥�� �˰� �ʹ�
	// => "������ ���Ϸ��� ������(��ü)"�� �־�� �մϴ�.
	// => non-static �̾�� �մϴ�.
	Date d3 = today.tomorrow();

	// �������� �����ϴ� is_leap_year() �� ������� �մϴ�.
	// static ���� �ұ�� ? non_static ���� �ұ� ?
	// => 2�� ����ø� �˴ϴ�
	// => �����Ҷ� ������ ������.. 
	bool b1 = today.is_leap_year(); // today �ȿ� �ִ� year �� �����ΰ� ?
	bool b2 = Date::is_leap_year(2025); // 2025 ���� �����ΰ� ?
}