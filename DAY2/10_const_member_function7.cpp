#include <iostream>

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

	int size() const { return sz; }
	bool empty() const { return sz == 0; }

	T at(int idx) const { return ptr[idx]; }
};

int main()
{
	vector<int> v1(4, 1);
	const vector<int> v2(4, 1);

	// #2. at() �� const ��� �Լ��̰�
	//	    ������ �ƴ� ���� ��ȯ�Ҷ� 

					   // ��ǥ		���� ��Ȳ
	int n1 = v1.at(0); // O			O
	int n2 = v2.at(0); // O			O		

	v1.at(0) = 10;	   // O			X   <= �߸��� ����
	v2.at(0) = 10;     // X			X

}