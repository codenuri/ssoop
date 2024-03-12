#include <iostream>

// 방법 2. 전역변수 사용
// => 전역변수는 모든 Car 객체가 공유한다.
// => 객체의 갯수 파악 성공.!!!

// 그런데!!
// 1. 전역변수는 어디서나 접근(변경)가능하므로 위험하다.
// 2. Car 뿐 아니라 Truck 객체의 갯수도 알고 싶으면 또 다른 전역변수 필요!!!

// cnt 를 private 에 보호할수 없을까 ??

int cnt = 0;

class Car
{
	int color = 0;
public:	

	Car()  { ++cnt;}
	~Car() { --cnt;}
};

int main()
{
	Car c1;
	Car c2;

	cnt = 100;	// 전역변수는 어디서나 접근 가능하다.
				// 안전하지 않다.

	std::cout << cnt << std::endl;	// 2
	
}
