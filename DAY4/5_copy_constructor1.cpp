#include <iostream>

// copy constructor ( ���� ������, 123 page ~ )

class Point
{
	int x, y;
public:
	Point()             : x{ 0 }, y{ 0 } {} // 1 �� ������
	Point(int a, int b) : x{ a }, y{ b } {} // 2 �� ������

	// ���� ������ : �ڽŰ� ������ Ÿ���� ��ü�Ѱ��� ���ڷ� ������ ������
	// => ����ڰ� ������ ������ �����Ϸ��� ����
	// => �����Ϸ� ������ "��� ����� �״�� ����"
	Point(const Point& other) : x(other.x), y(other.y) {}
};

int main()
{
	// �Ʒ� 4�ٿ� ���ؼ� ������ ���ô�.
	Point p1;		// ok.    1�� ������ ȣ��
//	Point p2(1);	// error. Point(int) ����� �����ڴ� ����
	Point p3(1,2);	// ok.    2�� ������ ȣ��

	Point p4(p3);   // Point( Point ) ����� �����ڰ� �ʿ� �ϴ�.
					// => �� ����� �����ڸ� �������� ������
					// => �� �ڵ�� ������ �ƴϴ�.
					// => �����Ϸ��� �ڵ����� ����� �ش�.
					//    "���� ������"

	Point p5 = p3; // ���ڵ�� ���� ������ ȣ��
}