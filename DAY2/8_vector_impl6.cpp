#include <iostream>


// Ŭ������ ������ ����, "Ŭ������ �����ϴ� Ʋ(���ø�)" �� ��������
// => �Լ� �� �ƴ϶� Ŭ������ ���ø����� ����� �ִ�.

template<typename T>
class vector
{
	T* ptr;
	int sz;
public:
	vector(int size, T value) : sz{ size }
	{
		ptr = new T[sz];

		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~vector() { delete[] ptr; }

	T& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if (sz < newsize) 
		{
			T* tmp = new T[newsize];

			memcpy(tmp, ptr, sizeof(T) * sz);
			delete[] ptr;
			ptr = tmp;
			sz = newsize;
		}
		else
		{

		}
	}

	int size() { return sz; }
	bool empty() { return sz == 0; }
};

int main()
{
	// Ŭ���� ���ø� ���� �ݵ�� Ÿ�� ���� ������ �մϴ�.
	// => �Լ����ø��� ���� ����������, Ŭ���� ���ø��� �����ؾ� �մϴ�.
	vector<int> v(4, 3);

	v.at(0) = 5;
	v.resize(8);

	std::cout << v.at(0) << std::endl;
}