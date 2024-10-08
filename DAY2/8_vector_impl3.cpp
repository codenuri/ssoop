#include <iostream>

// at() ��� �Լ�
// => �ٽ� : "v.at(0) = 5" �� ���ϱ� ���� reference return 

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


	int& at(int idx) { return ptr[idx] ; }
};

int main()
{
	vector v(4, 3);

	v.at(0) = 5;  // v[0] = 5

	std::cout << v.at(0) << std::endl; // 5
}