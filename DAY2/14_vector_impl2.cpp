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

	// 생성자에서 자원(메모리)등을 할당했다면
	// 소멸자를 만들어서 제거하는 것이 관례입니다.
	~vector() { delete[] ptr; }
};

int main()
{
	vector v(4,0);

//	v.resize(8);  

	int n = v.size(); 
}
