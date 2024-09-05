#include <iostream>


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


	// #1. 복사 생성자 모양 정확히 알아 두세요(인자로 자신과 동일타입의 const &)

	// #2. 깊은 복사(Deep Copy) 개념 알아 두세요

	vector(const vector& other) : sz( other.sz )
	{
		// 1. 포인터가 아닌 멤버 데이타는 그대로 복사
		//    => 단, 아래 처럼 하지말고 초기화 리스트에서
		// sz = other.sz;

		// 2. 포인터 멤버는 주소를 복사하지 말고
		//    => 동일 크기 메모리 할당후에
		//    => 메모리 자체를 복사
		ptr = new int[sz];


		memcpy(ptr, other.ptr, sizeof(int) * sz);
	}

};

int main()
{
	vector v1(4, 0);
	vector v2 = v1; 
}

