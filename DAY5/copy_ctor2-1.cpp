#include <iostream>

class Counter 
{
	int cnt = 0;
public:
	int get() const { return cnt;}

	void increment()
	{
		++cnt;
	}
};
int main()
{
	Counter c;
	c.increment();
	c.increment();
	c.increment();
	std::cout << c.get() << std::endl;
}