#include <iostream>

// C++17 inline static 문법 - 122 page

class Car
{
	int color = 0;

	// C++17 의 inline static 을 사용하면 
	// static 멤버 변수의 외부정의 필요 없습니다.
	// 초기화도 여기서 가능
	inline static int cnt = 0;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; }
};



int main()
{

}

