#include <iostream>

struct Point3D
{
	int x = 1;
	int y = 2;
	int z = 3;

	// int* �� ++�� �̵��ǰ�, * �˴ϴ�.
	// => ��, int* �� �ݺ��ڷ� �����Ҽ� �ֽ��ϴ�.
	// => begin()/end()�� �ݺ��� ��ȯ�ؾ� �ϴµ�, ���� ������ ��ȯ�ص��˴ϴ�.
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