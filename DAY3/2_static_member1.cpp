#include <iostream>

// 110page ~

// 객체가 몇개나 생성되었는지 갯수를 관리하고 싶다.
// 방법 1. 멤버 데이타 사용

class Car
{
	int color = 0;
public:
	int cnt = 0;

	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	std::cout << c1.cnt << std::endl;	
	
}
