#include <iostream>

// C++ 에서 클래스를 만드는 2가지 방법
// 1. 클래스 선언에 멤버 함수의 구현을 포함
// 2. 클래스 선언에는 멤버 함수의 선언만 포함하고 멤버 함수 구현은 클래스 외부 구현
//    => 선언은 헤더 파일에, 구현은 소스파일(.cpp) 로 작성

class vector
{
	int* ptr;
	int sz;
public:
	vector(int size, int value);
	~vector();

	int& at(int idx);
	int at(int idx) const;

	void resize(int newsize);

	int  size() const;
	bool empty() const;
};



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







int main()
{
	vector v(4, 3);

	v.at(0) = 5;
	v.resize(8);

	std::cout << v.at(0) << std::endl;
}