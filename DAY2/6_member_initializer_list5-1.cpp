#include <iostream>

int g = 10;

class Test
{
	int v1 = 0;
	int v2 = ++g;
public:
	Test() {}
	Test(int a) : v2{ a } {}
};

int main()
{
	Test t1;
	Test t2(5);
	std::cout << g << std::endl; // ��� ������ ������
}