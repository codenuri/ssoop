class Point
{
	int x, y;
public:
	void set(int a, int b) {}
};

void foo(int a, int b) {}

int main()
{
	void(*f1)(int, int) = &foo;			// ok
//	void(*f2)(int, int) = &Point::set;	// error. ���ڰ� 3���� �Լ�
										// this call!!!
	// �ٽ� 1. �Ϲ� �Լ� ������ ��� �Լ� �ּҸ� ������ �����ϴ�.

	// �ٽ� 2. �Ʒ�ó���ؾ� �մϴ� "��� �Լ�������" ��� ����
	void(Point::*f3)(int, int) = &Point::set;

//	f3(3, 3);	// error. ��� �Լ� �̹Ƿ� ��ü�� �ʿ��ѵ�.
				// ��ü���� ȣ���ϰ� �ִ� �ڵ�

//	Point pt;
//	pt.f3(3, 3); // error. Point �ȿ��� ��� �Լ� f3�� ����.

	// �ذ�å : pointer to member operator ��� ������ ��� ( .* )

//	pt.*f3(3, 3); // error. ������ �켱����

	(pt.*f3)(3, 3); // ok. 
}