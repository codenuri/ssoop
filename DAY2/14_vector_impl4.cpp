#include <iostream>
#include <cstring>   

class vector
{
private:
	int* ptr;
	int  sz;

public:
	vector(int size, int value = 0 )
	{
		sz = size;
		ptr = new int[size];

		for( int i = 0; i < size; i++)
			ptr[i] = value;
	}

	int size() { return sz; }
	~vector() { delete[] ptr; }

	int& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if ( size < newsize ) // 커지는 경우
		{
			int* tmp = new int[newsize];

			memcpy(tmp, ptr, sizeof(int)*size);

			delete[] ptr;

			ptr = tmp;

			size = newsize;
		}
		else
		{
			// 작아지는 경우는 어떻게 해야 할지 생각해 보세요 - 금요일날 배웁니다.
		}
	}
};






int main()
{
	vector v(4);

	v.at(0) = 3;

	v.resize(8);

	std::cout << v.at(0) << std::endl;
}
