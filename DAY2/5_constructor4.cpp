#include <iostream>



class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

// �ٽ� : ��� ����Ÿ�� �����ڰ� ȣ��Ǵ� ������ �˾� �μ���.

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	// �����	// �����Ϸ� ����
	Rect()		// Rect() : leftTop{}, rightBottom{}
	{									// Point rightBottom;
		std::cout << "Rect()" << std::endl;
	}

	// ��� ����Ÿ�� �ٸ� ����� �����ڸ� ȣ���Ϸ��� ���� ȣ���ϸ�˴ϴ�.
	//=> ǥ��� �˾� �μ���
	Rect(int x1, int y1, int x2, int y2)
		: leftTop{ x1, y1 }, rightBottom{ x1, y2 }
	{
	}
};

int main()
{
	Rect rc1; // �̼����� "call Rect::Rect()"
	Rect rc2{ 1,1, 10,10 };
}