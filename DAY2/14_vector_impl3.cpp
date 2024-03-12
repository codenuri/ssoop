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
	// 함수가 reference 를 반환하면 함수 호출이 등호의 왼쪽에 올수 있습니다.
	// => v.at(0) = 3 이 가능
//	int  at(int idx) { return ptr[idx]; } // v.at(0) = 3 이 에러
	int& at(int idx) { return ptr[idx]; }
};
int main()
{
	vector v(4);

	// 아래 코드중 좋아 보이는 것을 골라 보세요
	// => v[0] = 3 의 의도!
//	v.set(0, 3);  
	v.at(0) = 3;

	std::cout << v.at(0) << std::endl;
}
