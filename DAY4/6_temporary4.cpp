#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
/*
void f1(Point  pt) {} // call by value     : ���纻 ����
void f2(Point& pt) {} // call by reference : ���纻 �����ȵ�.

int main()
{
	Point p(0, 0);
	f1(p);
	f2(p);
}
*/






Point pt(1, 2);

Point foo()	// return by value
{
	return pt;	// pt ��ü�� ��ȯ�Ǵ� ���� �ƴմϴ�.
				// pt �� ���纻(�̸����� �ӽð�ü)
				// �� �����Ǿ ��ȯ �˴ϴ�.
}

Point& goo()	// return by reference 
{				// ���纻�� �ƴ� pt ��ü�� ��ȯ�� �޶�� ��
	return pt; 
}
int main()
{
	foo().x = 10; // "���Ͽ� �ӽð�ü.x = 10"
				  // �ӽð�ü�� =�� ���ʿ� �ü� �����ϴ�. error

	goo().x = 10; // ok. "pt�Ǻ���.x = 10" 
}

// ����!!. ���������� ���� ���� �������� ������
// => ����ȯ�� �����մϴ�.
// => �Լ� ȣ���� ������ �ı��������� �͸� ���� ��ȯ����.
Point& hoo()
{
	Point p(1, 2);
	return p;  // ����
}



