#include <iostream>

// ���α׷����� "��¥"�� ����ؾ� �մϴ�.
// => Date ��� Ÿ���� ������ �����մϴ�
// => SRP(Single Responsibility Priciple) : �Ѱ��� Ŭ������ �Ѱ��� å��

class Date
{
	int year;
	int month;
	int day;
public:
	// #1. ������
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day }
	{
		// year = year; // ����year = ����year
		// ������ �� �ʱ�ȭ ����Ʈ������ ���� �����ϴ�.
	}

	// #2.setter/getter ����. 
	int get_year() const { return year; }
	void set_year(int y) { if (y > 0 && y < 3000) year = y; }

	// month, day �� �����Ҷ� �غ�����
};

int main()
{
	Date today{ 2024, 9, 4 };
}