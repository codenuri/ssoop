#include <iostream>

// ��� 2. ��������
// => ��ü�� ���� �ľ� ���� !!

// ����
// => ���������� ��𼭵� ���� �����ϴ�.
// => private ���� ��� �Ҽ� ������ ???

int cnt = 0;

class Car
{
	int color = 0;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	cnt = -10; // ����ڰ� �Ǽ��ߴ�.
				// �����ϸ� �ȵǴµ�,...
				// �Ǽ� �Ҽ� ���� �Ҽ� ������ ? �����ϰ�

	std::cout << cnt << std::endl;	// 2

}