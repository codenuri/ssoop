#include <iostream>

// �ٽ�
// ����� ���� Ÿ���� ��ü�� std::cout ���� �������
// => operator<<() �� �Ϲ��Լ� ������ ����� �˴ϴ�.
// => �Ʒ� ���� ����. 

class Point
{
	int x;
	int y;
public:
	Point(int x, int y) : x(x), y(y) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	Point p(1, 2);

	// operator<<(cout, p)
	std::cout << p ; // cout.operator<<(Point) �� �־�� �մϴ�.
//					 // => �翬�� operator<<(Point) ������ �����ϴ�.
					 // => C++ ǥ�� ostream �� ��� �߰��� �ȵ˴ϴ�.
					 // 
					 // ������, �Ϲ� �Լ��δ� �����մϴ�.
					 // operator<<(std::ostream, Point) ��������˴ϴ�
					
					
					
}

