#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()             : x{ 0 }, y{ 0 } { std::cout << "Point()\n"; }
	Point(int a, int b) : x{a}, y{b}{} 
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:

	// ����� �ڵ�			// �����Ϸ��� ������ �ڵ�
	Rect()					// Rect() : leftTop{}, rightBottom{}
	{
		// �� ��ġ�� ���� �ڵ��
		// leftTop, rightBottom ������ ȣ�� �ڵ� ����
		// => C++�� ǥ���Ҷ��� ��ó�� "�ʱ�ȭ ����Ʈ�� ǥ��"

		std::cout << "Rect()\n";
	}
};



int main()
{
	Rect rc; // ������ Ȯ���� ������
			 // call Rect::Rect() 
}