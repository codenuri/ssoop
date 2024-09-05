#include <iostream>

// 왜 복사생성자를 알아야 하나요 ?
// 컴파일러가 만들어주는 것을 그냥사용하면 안되나요 ?
// => 대부분은 "컴파일러 제공 버전을 사용하면 됩니다."

// 그런데, 주의해야 할 경우가 있습니다. - 아래 코드


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
	vector v2 = v1;
}

