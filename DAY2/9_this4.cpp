// this1 ����

#include <iostream>

// this : ��ü���� ����� ����!!!! - 97p

// => �ݵ�� ������ �μ���

// 1. ��� �Լ��� ������ �Ǹ�, ���ڷ� ��ü �ּҸ� �ް� �˴ϴ�.
// => "this call" �̶�� �մϴ�.

class Point
{
	int x, y;
public:
	// C++98 ~ : ��ü�� �ּҰ� �����Ϸ������� �Ͻ������� �߰��˴ϴ�.
	// ���̽� : �����ڰ� ��ü�� ������ ���� �޾ƾ� �մϴ�.
	//         def set(self, a, b)
	void set(int a, int b)	// void set(Point* this, int a, int b)
	{
		x = a;				// this->x = a;
		y = b;				// this->y = b;		
	}
	// C++23 ���� ��� �Լ����� ��ü ����(�ּ�)�� ���������� �޴� �����
	// ������ϴ�. 
	// "explicit object parameter" ��� ����. 
	// �Ʒ� �ڵ�� ���� ������ ���� �ǹ�
	// => ��?? �̷� ������ ���⳪�� ? => ���� �����ϰ� ����� ����!!
	void set2(this Point& self, int a, int b)
	{
		self.x = a;				
		self.y = b;		

		std::cout << &self << std::endl;
	}

};

int main()
{
	Point p1;
	Point p2;

	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;

	p1.set(10, 20); 

	p2.set(10, 20); 
}