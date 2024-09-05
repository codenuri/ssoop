#include <iostream>

// 왜 복사생성자를 알아야 하나요 ?
// 컴파일러가 만들어주는 것을 그냥사용하면 안되나요 ?
// => 대부분은 "컴파일러 제공 버전을 사용하면 됩니다."

// 그런데, 주의해야 할 경우가 있습니다. - 아래 코드

// 1. 클래스 내부에 포인터 멤버가 있고
// 2. 생성자 에서 동적할당하는 코드가 있다면
// 3. 디폴트 복사 생성자(컴파일 제공 버전)은 
//    Shallow Copy(얕은 복사) 현상이 있습니다.
//	  (메모리 내용을 복사하지 않고, 주소만 복사하는 것 )

// 해결책 
// => 개발자가 직접 복사생성자를 제공해야 합니다.


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
};

int main()
{
	vector v1(4, 0);
	vector v2 = v1; // 이순간의 메모리 모양을 생각해 봅시다.
}

