#include <iostream>

class Point
{
	int x;
	int y;
public:
};

int main()
{
	Point pt;

	std::cout << sizeof(pt) << std::endl;
}