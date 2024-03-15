#include <iostream>

class Counter 
{
	int cnt = 0;
public:
	int get() const { return cnt;}

	Counter increment()
	{
		++cnt;
		return *this;
	}

	Counter() { std::cout << "Counter()\n";}
	~Counter() { std::cout << "~Counter()\n";}

	Counter(const Counter& other) : cnt{other.cnt}
	{
		std::cout << "Counter(const Counter&)\n";}
	}
};
int main()
{
	Counter c;
//	c.increment();
//	c.increment();
//	c.increment();

	c.increment().increment().increment();

	std::cout << c.get() << std::endl;
}