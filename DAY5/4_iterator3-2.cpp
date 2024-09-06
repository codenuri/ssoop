#include <iostream>

struct Point3D
{
	int x = 1;
	int y = 2;
	int z = 3;
};

int main()
{
	Point3D p;
	for (auto e : p)
	{
		std::cout << e << ", ";
	}
}