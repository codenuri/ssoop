#include <iostream>

// 106page ~

// 객체가 몇개나 생성되었는지 갯수를 관리하고 싶다.
// 방법 1. 멤버 데이타 사용
// => 멤버 데이타는 "객체당 한개씩" 따로 생성된다.
// => 객체의 갯수 파악 실패!
class Car
{
	int color = 0;
public:	

	int cnt = 0;

	Car()  { ++cnt;}
	~Car() { --cnt;}
};

int main()
{
	Car c1;
	Car c2;

	std::cout << c1.cnt << std::endl;	
	
}
