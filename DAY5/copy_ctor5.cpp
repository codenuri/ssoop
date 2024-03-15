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

	// 복사 생성자를 만들지 않으면
	// => 컴파일러가 제공하게 됩니다.

	// 컴파일러에게 복사 생성자를 만들지 말라고 하고 싶다면
	vector(const vector& v) = delete; // 함수 삭제라는 문법
									
};

int main()
{
	vector v1{4, 1};

	vector v2 = v1; // 절대 이렇게 사용하지 못하도록 해 봅시다.

}