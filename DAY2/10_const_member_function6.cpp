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


	T& at(int idx) const { return ptr[idx]; }
};

int main()
{
	      vector<int> v1(4, 1);
	const vector<int> v2(4, 1);

	// #2. at() 이 const 멤버 함수인 경우.

					   // 목표		현재 상황
	int n1 = v1.at(0); // O			O
	int n2 = v2.at(0); // O			O		

	v1.at(0) = 10;	   // O			O
	v2.at(0) = 10;     // X			O  <= 잘못된 동작

	// 마지막 줄이 O 인 까닭은 
	// => "v2" 자체는 상수 (ptr, sz 자체는 변경 안됨) 지만
	// => v2가 할당한 버퍼(힙)은 상수 메모리 아님.

	// 그런데, 목표는 "버퍼"도 상수 처럼 보이게 해야 한다.
}