#include <iostream>

// #1. �����迭(vector)�� ���鶧 �ʿ��� ��� ����Ÿ�� �����ϼ���
// #2. �����ڸ� ����� �ʿ��� �ʱ�ȭ�� �ϼ���

// #3. �����Ҷ� �Ʒ� main �� ����ɶ� "�޸� �׸�"
//     �� �׷� ������.. �ݵ�� �����ؾ� �մϴ�.

class vector
{
	int* ptr;
	int sz;	
public:
	vector(int size, int value) : sz{ size }
	{
		ptr = new int[sz];

		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}

	// �����ڿ��� "�޸� �Ҵ�"���� �Ѱ�쿡��
	// �Ҹ��ڸ� ���� "�޸� ����" �ϴ� ���� ����
	// => �����ڿ��� �ڿ��Ҵ� �ڵ� ��������
	//    �Ҹ��� �����ʿ� �����ϴ�.
	~vector() { delete[] ptr; }
};

int main()
{
	vector v(4, 3);  
}