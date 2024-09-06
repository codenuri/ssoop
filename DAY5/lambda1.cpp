// lambda1.cpp
#include <iostream>

struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	Plus p;
	int n = p(1, 2); // ??
}