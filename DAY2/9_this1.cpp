#include <iostream>

// this : ��ü���� ����� ����!!!! - 97p

// => �ݵ�� ������ �μ���

// 1. ��� �Լ��� ������ �Ǹ�, ���ڷ� ��ü �ּҸ� �ް� �˴ϴ�.
// => "this call" �̶�� �մϴ�.

class Point
{
	int x, y;
public:
	void set(int a, int b)	// void set(Point* this, int a, int b)
	{						
		x = a;				// this->x = a;
		y = b;				// this->y = b;		

		std::cout << "set : " << this << std::endl;
	}
};

int main()
{
	Point p1;
	Point p2;

	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;

	p1.set(10, 20); // set(&p1, 10, 20) �� ������ ȣ��

	p2.set(10, 20); // set(&p2, 10, 20)
}