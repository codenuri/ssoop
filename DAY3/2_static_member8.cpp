#include <iostream>

// ����� ������ �и� - 120 page

// #1. static ��� �Լ��� "���𿡸� static" �� ǥ���ؾ� �մϴ�.
// => �������� "static" ���̸� C����� "static �Լ�" �� ���� �浹
// => C��� static �Լ� �н��� ������

// #2. static ��� ������ �ܺ� ������ �ҽ�(car.cpp) �� �־�� �մϴ�.
// => (C ���� ���������� ����� �ƴ� �ҽ��� ���� ����ؾ� �մϴ�.)
// => �Ʒ� �ڵ� �����ϼ���

// Car.h
class Car
{
	int color = 0;
	static int cnt;
public:
	Car();
	~Car();
	static int get_count();
};

// Car.cpp
#include "Car.h"

int Car::cnt = 0;

Car::Car() { ++cnt; }
Car::~Car() { --cnt; }
int Car::get_count() { return cnt; }


int main()
{

}
