#include <iostream>

struct Point3D
{
	int x = 1;
	int y = 2;
	int z = 3;

	// int* 도 ++로 이동되고, * 됩니다.
	// => 즉, int* 도 반복자로 생각할수 있습니다.
	// => begin()/end()가 반복자 반환해야 하는데, 실제 포인터 반환해도됩니다.
	int* begin() { return &x; }
	int* end()   { return &z + 1; }
};

int main()
{
	Point3D p;

	for (auto e : p) // ?
	{
		std::cout << e << ", ";
	}
}