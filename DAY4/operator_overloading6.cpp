// DAY2 에서 14_vector_impl5.cpp 복사해오세요
#include <iostream>
#include <cstring>   

template<typename T> 
class vector
{
private:
	T* ptr;
	int  sz;
public:
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

	// [] 연산자 재정의 : 객체를 배열 처럼 사용가능하게 할때 사용
	T& operator[](int idx) { return ptr[idx]; }



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
	vector<int> v(4);

	v.at(0) = 3;

	v[0] = 5; // "v.operator[](0) = 5" 로 컴파일러가 해석합니다.

	std::cout << v.at(0) << std::endl;
}

// java : 연산자 재정의 문법 없다.
//		  단, 표준 라이브러리 string 에 대해서만 + 가능. 예외적인 규칙

// C# : 자주 사용되는 20여개의 연산자 재정의 가능(+, -, ==, ! 등)

// C++ : 4개를 제외한 모든 연산자 재정의 가능
//       .   ::    ?:    .*