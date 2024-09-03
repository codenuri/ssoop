// vector.cpp 에 아래 멤버 함수 구현 넣으세요
#include "vector.h"

vector::vector(int size, int value) : sz{ size }
{
	ptr = new int[sz];

	for (int i = 0; i < sz; i++)
		ptr[i] = value;
}

vector::~vector()
{
	delete[] ptr;
}

int& vector::at(int idx)
{
	return ptr[idx];
}

int vector::at(int idx) const
{
	return ptr[idx];
}

void vector::resize(int newsize)
{
	if (sz < newsize)
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

int vector::size() const
{
	return sz;
}
bool vector::empty() const
{
	return sz == 0;
}

