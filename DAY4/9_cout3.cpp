//#include <iostream>
#include <stdio.h>

namespace std
{
	class ostream
	{
	public:
		// #1. << �����ڸ� �������� �ϱ� ���� �ڽ��� ������ ��ȯ
		// #2. �Ʒ� 3���� ���������, ���� ǥ���� ��� �⺻Ÿ�Կ� ���ؼ� ����
		ostream& operator<<(int n) { printf("%d", n);         return *this;}
		ostream& operator<<(double d) { printf("%f", d);      return *this;}
		ostream& operator<<(const char* s) { printf("%s", s); return *this;}
	};
	ostream cout;
}

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n << ", " << d << "\n";
	// cout.operator<<(n).operator<<(", ").operator<<(d).operator<<("\n")

}

