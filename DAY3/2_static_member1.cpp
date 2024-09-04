#include <iostream>

// 110page ~

// 객체가 몇개나 생성되었는지 갯수를 관리하고 싶다.
// 방법 1. 멤버 데이타 사용
// => 실패!!
// => 멤버 데이타는 모든 객체가 따로 가지게 된다.
// => 아래 코드에서 c1.cnt 와 c2.cnt 는 별도의 메모리 이다.

class Car
{
	int color = 0;
public:
	int cnt = 0;

	Car()  { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	std::cout << c1.cnt << std::endl;	// 1
	
}
