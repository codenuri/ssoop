#include <iostream>

class Counter
{
	int cnt = 0;
public:
	Counter increment()
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
};

int main()
{
	Counter c;

	std::cout << "==================\n";
	c.increment().increment().increment();
	std::cout << "==================\n";

	std::cout << c.get() << std::endl;
}

