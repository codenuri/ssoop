#include <iostream>

class Point
{
	int x;
	int y;
public:
//	Point() : x{ 0 }, y{ 0 } { std::cout << "Point()\n"; }
	Point(int a, int b) : x{ a }, y{ b } {}
};

// Point ���� ���� ���� �����ڰ� �����ϴ�
// Point p1;      // error
// Point p2{1,2}; // ok

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	// �ٽ� #1. �� �Ʒ� �ڵ尡 �������� �˾ƾ� �մϴ�.
	// => Point �� ���� ���� �����ڰ� ���µ�,
	//    �����Ϸ��� ������ �ּ� ó�� �ڵ带 �����ϰ� �ֱ� ������
	// ����� �ڵ�			// �����Ϸ��� ������ �ڵ�
	/*
	Rect()					// Rect() : leftTop{}, rightBottom{}
	{
		std::cout << "Rect()\n";
	}
	*/

	// �ذ�å : ����ڰ� ��� ����Ÿ�� �ٸ� �����ڸ� ���������� 
	//			ȣ���ϸ� �˴ϴ�.
	//			�ʱ�ȭ ����Ʈ ����

	Rect() : leftTop{ 0, 0 }, rightBottom{ 0, 0 }
	{
	}
};

int main()
{
	Rect rc; 
}
// ����Ʈ ������(���ڰ� ���� ������) �� ��� ����Ÿ�� ������ ���
// => �ݵ�� �ʱ�ȭ ����Ʈ �������� ����ڰ� ����������
//    ����� �����ڸ� ȣ���ؾ� �մϴ�.
