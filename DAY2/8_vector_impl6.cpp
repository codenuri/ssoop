#include <iostream>


// 클래스를 만들지 말고, "클래스를 생성하는 틀(템플릿)" 을 제공하자
// => 함수 뿐 아니라 클래스도 템플릿으로 만들수 있다.

template<typename T>
class vector
{
	T* ptr;
	int sz;
public:
	vector(int size, T value) : sz{ size }
	{
		ptr = new T[sz];

		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~vector() { delete[] ptr; }

	T& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if (sz < newsize) 
		{
			T* tmp = new T[newsize];

			memcpy(tmp, ptr, sizeof(T) * sz);
			delete[] ptr;
			ptr = tmp;
			sz = newsize;
		}
		else
		{

		}
	}

	int size() { return sz; }
	bool empty() { return sz == 0; }
};

int main()
{
	// 클래스 템플릿 사용시 반드시 타입 인자 보내야 합니다.
	// => 함수템플릿은 생략 가능하지만, 클래스 템플릿은 전달해야 합니다.
	vector<int> v(4, 3);

	v.at(0) = 5;
	v.resize(8);

	std::cout << v.at(0) << std::endl;
}