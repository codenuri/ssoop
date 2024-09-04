#include <iostream>

// 선언과 구현의 분리 - 120 page

class Car
{
	int color = 0;
	static int cnt;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
	static int get_count() { return cnt; }

};
int Car::cnt = 0;

int main()
{

}

