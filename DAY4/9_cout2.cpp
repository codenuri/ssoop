//#include <iostream>
#include <stdio.h>

// ���� : std �ȿ� ���ο� �߰� �ϴ� ���� �ϸ� �ȵ˴ϴ�.
//       �Ʒ� �ڵ�� �������ظ� ���� ���������θ�..
namespace std
{
	class ostream
	{
	public:
		// ���� ȭ�� ����� "�� OS �ý����� ���"
		// �Ʒ� �ڵ�(printf)�� ������ �ϱ� ����
		void operator<<(int n)         { printf("%d", n); }
		void operator<<(double d)      { printf("%f", d); }
		void operator<<(const char* s) { printf("%s", s); }
	};
	ostream cout;
}

int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double)

}

