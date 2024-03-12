#include <iostream>
#include <cstring>   

// 클래스를 만들지 말고
// 클래스를 만드는 틀(template) 으로 설계

template<typename T> 
class vector
{
private:
	T* ptr;
	int  sz;

public:
	// T value = T() : T 타입의 기본값
	//					int, double 등의 primitive type 은 0
	vector(int size, T value = T() )
	{
		sz = size;
		ptr = new T[size];

		for( int i = 0; i < size; i++)
			ptr[i] = value;
	}

	int size() { return sz; }
	~vector() { delete[] ptr; }

	T& at(int idx) { return ptr[idx]; }

	void resize(int newsize)
	{
		if ( sz < newsize ) 
		{
			T* tmp = new T[newsize];

			memcpy(tmp, ptr, sizeof(T)*sz);

			delete[] ptr;
			ptr = tmp;

			sz = newsize;
		}
		else
		{
		}
	}
};






int main()
{
	// 함수 템플릿 : 타입인자 생략가능. 생략시 함수 인자로 타입 추론
	// 클래스 템플릿 : C++17 이전에는 반드시 타입인자 전달해야 합니다.
	//				  C++17 부터는 생성자 인자로 추론 가능
	vector<int> v(4);

	v.at(0) = 3;

	v.resize(8);

	std::cout << v.at(0) << std::endl;
}
