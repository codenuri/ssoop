#include <iostream>


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
	~vector() { delete[] ptr; }


	// #1. ���� ������ ��� ��Ȯ�� �˾� �μ���(���ڷ� �ڽŰ� ����Ÿ���� const &)

	// #2. ���� ����(Deep Copy) ���� �˾� �μ���

	vector(const vector& other) : sz( other.sz )
	{
		// 1. �����Ͱ� �ƴ� ��� ����Ÿ�� �״�� ����
		//    => ��, �Ʒ� ó�� �������� �ʱ�ȭ ����Ʈ����
		// sz = other.sz;

		// 2. ������ ����� �ּҸ� �������� ����
		//    => ���� ũ�� �޸� �Ҵ��Ŀ�
		//    => �޸� ��ü�� ����
		ptr = new int[sz];


		memcpy(ptr, other.ptr, sizeof(int) * sz);
	}

};

int main()
{
	vector v1(4, 0);
	vector v2 = v1; 
}
