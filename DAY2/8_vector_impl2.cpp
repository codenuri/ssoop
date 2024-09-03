#include <iostream>

// #1. 동적배열(vector)를 만들때 필요한 멤버 데이타를 생각하세요
// #2. 생성자를 만들고 필요한 초기화를 하세요

// #3. 복습할때 아래 main 이 실행될때 "메모리 그림"
//     꼭 그려 보세요.. 반드시 이해해야 합니다.

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

	// 생성자에서 "메모리 할당"등을 한경우에는
	// 소멸자를 만들어서 "메모리 해지" 하는 것이 관례
	// => 생성자에서 자원할당 코드 없을때는
	//    소멸자 만들필요 없습니다.
	~vector() { delete[] ptr; }
};

int main()
{
	vector v(4, 3);  
}