
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { }
	~Point() { std::cout << "~Point()" << std::endl; }
};

void draw_line(const Point& from, const Point& to) {}

int main()
{
	/*
	// (1,1) ~ (5,5) �� ���� �׸��� �ͽ��ϴ�.
	Point p1(1,1);
	Point p2(5,5);

	draw_line(p1, p2); // �̷��� �ϸ� p1, p2 ��
						// �Լ� ȣ��ڿ��� ��� �޸𸮿� �ְ�
						// {} �� ����� �ı� �˴ϴ�.
	*/
	// �ӽð�ü�� ����
	// => ���� ���޿��� ���ǰ�,
	// => �Լ� ȣ���� ���� �Ǹ� �ı� �˴ϴ�.
//	draw_line( Point(1, 1), Point(5, 5) );
				// => �ӽ� ��ü ���鶧 () ����ϸ� �Լ�ȣ�� ó�� ���Դϴ�.
	
	draw_line(Point{ 1, 1 }, Point{ 5, 5 } );
				// => () ��� {} �ʱ�ȭ�� ����ϸ�
				//    Ȯ���� �Լ� ȣ����� ���� �˴ϴ�. ����


	std::cout << "-----" << std::endl;
}




