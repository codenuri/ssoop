// 2_���������1.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point() : x{ 0 }, y{ 0 } {}
	Point(int a, int b) : x{ a }, y{ b } {}

	Point(const Point& p) : x{ p.x }, y{ p.y }
	{
		std::cout << "copy ctor" << std::endl;
	}
};

void f1(Point  p) {}
void f2(Point& p) {}

Point pt(1, 1);

Point  f3() { return pt; }
Point& f4() { return pt; }

int main()
{
	Point p1(1, 2);

	// ���� �����ڰ� ���Ǵ� ��� 3���� - 125p

	// #1. �ڽŰ� ������ Ÿ���� ��ü�� �ʱ�ȭ �ɶ� 
	Point p2 = p1;  // ���� ������
	Point p3( p1 ); // ���� ������
	Point p4{ p1 };// ���� ������
	Point p5 = { p1 };// ���� ������


	// #2. �Լ��� call by value �ΰ�ü ���޽�
	f1(p1); // ���� ������
	f2(p2); // ���纻 ���� �ȵǹǷ� "��������� ȣ��ȵ�"

	// #3. �Լ��� return by value �� ��ü�� �����Ҷ�
	// => ���� �� �ӽð�ü
	f3(); // ���Ͽ� �ӽð�ü ������ ���� ������ ȣ��
	f4(); // ���Ͽ� �ӽð�ü ����. ���� ������ ȣ�� �ȵ�.
}