#include <iostream>
// 163 page ~
class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	// ��� �Լ��� ������ operator+
	// +�� ���׿����� ������ ����� �����Ҷ��� ���ڰ� �Ѱ�!!
	// ���� ! : "p1+p2" ���� p1�� ��� ��ü�� ȣ�Ⱑ���ؾ� �մϴ�.
	//		    ������ �Լ��� �ؾ� �մϴ�.
	Point operator+(const Point& pt) const 
	{
		Point ret(x + pt.x, y + pt.y);
		return ret;
	}
};
int main()
{
	const Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // "operator+(p1, p2)" �� ã�ų�
						// "p1.operator+(p2)"  �� ã�� �˴ϴ�


	p3.print();
}
