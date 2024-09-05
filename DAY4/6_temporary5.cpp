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
};

int main()
{
	Counter c;

	c.increment().increment().increment();

	std::cout << c.get() << std::endl;
}

