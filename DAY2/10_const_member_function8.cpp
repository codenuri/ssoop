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

	// 상수 vector 와 비상수 vector 일때  at() 의 동작은 달라야 한다.
	// => 2개의 at() 을 제공한다.
	T& at(int idx)       { return ptr[idx]; }
	T  at(int idx) const { return ptr[idx]; }
};

int main()
{
	vector<int> v1(4, 1);
	const vector<int> v2(4, 1);

	// #4. at() 이 2개 있을때 (상수함수 와 비상수 함수)
					   // 목표		현재 상황
	int n1 = v1.at(0); // O			O
	int n2 = v2.at(0); // O			O		

	v1.at(0) = 10;	   // O			O
	v2.at(0) = 10;     // X			X

}