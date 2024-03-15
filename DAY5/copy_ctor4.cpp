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
	~vector() { delete[] ptr; }

	// 아래 코드가 "깊은 복사(deep copy)"로 구현된 복사 생성자 입니다.
	vector(const vector& other) : sz{other.sz}
	{
		// 1. 포인터가 아닌 멤버는 그냥 복사
//		sz = other.sz;

		// 2. 포인터 멤버는 "메모리 할당후, 메모리 자체를 복사"
		ptr = new int[sz];
		memcpy(ptr, other.ptr, sizeof(int)*sz);
	}
};

int main()
{
	vector v1{4, 1};
	vector v2 = v1;  

}