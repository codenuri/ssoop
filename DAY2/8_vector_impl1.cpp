#include <iostream>

// ��ü���� ���α׷��� : ���α׷����� �ʿ��� Ÿ���� ���� �����ض�!!

// => Rect, Point, Person ���� Ÿ�Ի� �ƴ϶�
// => vector, list, tree ���� �ڷᱸ���� Ÿ��ȭ �ϸ� �����մϴ�.

// �����迭(vector) �� Ÿ������ ������ ���ô�.

class vector
{
};

int main()
{
	// ��ǥ
	vector v(4, 3);  // 4���� 3����

	std::cout << v.at(0) << std::endl; // 3

	v.resize(8); // 8 ���� Ű���, 
}