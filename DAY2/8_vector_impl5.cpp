#include <iostream>

// vector 사용자들이 좋아할만한 다양한 멤버 함수들..

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

	int& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if (sz < newsize) // 커지는 경우
		{
			int* tmp = new int[newsize];
			memcpy(tmp, ptr, sizeof(int) * sz);
			delete[] ptr;
			ptr = tmp;
			sz = newsize;
		}
		else
		{
			
		}
	}

	int size()   { return sz; }
	bool empty() { return sz == 0; }
};

int main()
{
	vector v(4, 3);

	v.at(0) = 5;
	v.resize(8);

	std::cout << v.at(0) << std::endl; 
}