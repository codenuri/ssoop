// lambda1.cpp
#include <iostream>

// function object
// => () �����ڸ� ������ �ؼ� �Լ� ó�� ��밡���� ��ü

// �� ?? �Ϲ� �Լ��� ����� �Ǵµ� ??

// 1. ���¸� ������ �Լ�
// 2. Closure
// 3. �׿ܿ��� ������ �ʹ� �����ϴ�.
// 4. C++20 ���Ĵ� ��� ǥ�� �Լ��� �Լ��� �ƴմϴ�.(�Լ���ü �Դϴ�.)

struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	Plus p; // p �� �Լ��� �ƴ� ��ü �Դϴ�. Plus Ÿ���� ��ü

	int n1 = p(1, 2); // ��ü p�� �Լ� ó�� ����մϴ�. �Լ� ��ü����մϴ�.
	int n2 = p.operator()(1, 2); // �̷��� ���� ȣ���ص� �˴ϴ�.

	// p1 + p2 => p1.operator+(p2)


}


