#include <iostream>

class Counter
{
	int cnt = 0;
public:
//	Counter increment()		// 값반환, "*this" 의 복사본 임시객체 생성
	Counter& increment()	// 참조 반환, "임시객체가 아닌" *this 자체 별명반환
	{
		++cnt;
		return *this;
	}
	int get() const { return cnt; }

	Counter(const Counter& other) : cnt(other.cnt)
	{
		std::cout << "Counter(const Counter& other)\n";
	}
	~Counter() { std::cout << "~Counter()\n"; }

	Counter() {}
};

int main()
{
	Counter c;

	std::cout << "==================\n";
	c.increment().increment().increment();
	std::cout << "==================\n";

	std::cout << c.get() << std::endl;
}

