#include <vector>
#include <iostream>

// C++ ǥ�� ���̺귯���� ���ܸ� ���� ��������� ������
// �Ϻ� �Լ����� ���ܰ� �߻��մϴ�.

int main()
{
	std::vector<int> v(3);

	// at : if ������ index ������ �߸��� ��� ���� �߻�
	// [] : ���޵� index �� �״�� ��� - ������ ����!!
	//	   => index �� �����ϴٸ� at ���� [] �� ����

	try
	{
//		v.at(10) = 0; // �߸��� �ε��� ���� ���� �߻�
		v[10] = 0;	  // �߸��� �ε��� ���� �߸��� �޸�����!
	}
	catch (std::out_of_range& e)
	{
		std::cout << "�߸��� index ���\n";
	}

	for (int i = 0; i < v.size(); i++)
	{
		v[i] = 0;
	}
}