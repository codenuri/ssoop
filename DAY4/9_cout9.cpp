#include <iostream>


// scanf, std::cin
// => ��� �Է� ���ۿ��� ������ ���Դϴ�.
// => ���� �Է¹��۰� ��� ������
// => "Ű���� => �Է¹���"�� ��� ��ƾ ����. enter ĥ�� ����
int main()
{
	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (std::cin.fail() == true)
		{
			std::cout << "fail !!!\n";

			// �ٽ��Է� �ޱ����� "�Է¹��� ����� �մϴ�"
			// C : fflush(stdin), C++ : �Ʒ� �ڵ�

			std::cin.clear(); // 1. cin �� ���� state ����� reset �ϰ�
			std::cin.ignore();// 2. �Է¹��۸� ����,

			continue;		  // �ٽ� �õ�
		}
		break;
	}
	std::cout << n; 
}