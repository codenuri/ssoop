#include <iostream>

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

	int size() const { return sz; }
	bool empty() const { return sz == 0; }


	// 아래 코드 문제점
	// => 구현이 동일한 이름의 함수를 2개 만들어야 합니다.
	// => template 으로 자동생성되게 할수 없을까요 ?
	// => 그런데, 템플릿은 인자가 서로 다른 타입의 함수를 여러개 생성
	// T sqaure(T a) {} 

//	T& at(int idx)       { return ptr[idx]; } // at(vector* this)
//	T  at(int idx) const { return ptr[idx]; } // at(const vector* this)

	// 위 2개 함수를 C++23 으로 다시 만들면 아래와 같습니다.
	// => 이경우, const member 함수 문법은 아래 처럼
	// => 인자가 const 로 받도록 만들게 됩니다.
	// => 즉, 아래 2번째 함수가 위 2번째 함수와 동일
//	T& at(this vector& self,       int idx) { return self.ptr[self.idx]; } 
//	T  at(this const vector& self, int idx) { return self.ptr[self.idx]; }

	// 이제 this 가 인자로 나타났으므로 
	// template 을 적용해서 2개 함수를 자동생성할수 있게 됩니다
	// => "deducing this" 라고 알려진 기술
	// => this 의 타입을 추론하겠다는 의미.
	template<typename U>
	decltpe(auto) at( this U& self, int idx) { return self.ptr[self.idx]; }
};



int main()
{
	vector<int> v1(4, 1);
	const vector<int> v2(4, 1);


	int n1 = v1.at(0); 
	int n2 = v2.at(0); 
	v1.at(0) = 10;	  
	v2.at(0) = 10;    

}