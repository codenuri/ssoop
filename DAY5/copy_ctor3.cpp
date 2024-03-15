#include <iostream>
#include <cstring>   

// 왜 복사 생성자가 중요한가요 ?
// 컴파일러가 만들어주는 것을 그냥 사용하면 안되나요 ?
// => Point 같은 클래스는 그냥 사용하면 됩니다.


// 단, 일부 클래스는 컴파일러가 만들어주는 것을 사용하면 안됩니다
// => 아래 vector!


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
};

int main()
{
	vector v1{4, 1};
	vector v2 = v1;

}