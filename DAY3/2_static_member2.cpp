#include <iostream>

// 방법 2. 전역변수
// => 객체의 갯수 파악 성공 !!

// 단점
// => 전역변수는 어디서든 접근 가능하다.
// => private 으로 방어 할수 없을까 ???

int cnt = 0;

class Car
{
	int color = 0;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	cnt = -10; // 사용자가 실수했다.
				// 변경하면 안되는데,...
				// 실수 할수 없게 할수 없을까 ? 안전하게

	std::cout << cnt << std::endl;	// 2

}
