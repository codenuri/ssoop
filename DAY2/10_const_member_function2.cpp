// ��� ��� �Լ��� ������ �ƴ� "�ʼ� ����" �Դϴ�.

// => ��ü�� ���¸� �������� ����(��� ����Ÿ�� �������� ����)
//    ��� ��� �Լ�(����, getter �� �Ҹ��� ��� ��� �Լ�)
//    "�ݵ��" const member function ���� �ؾ� �մϴ�.

// �Ʒ� �ڵ忡�� "getArea()"�� const ������ ������ "�߸���(Ʋ��)" 
// �ڵ� �Դϴ�.


class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x{a}, y{b}, w{c}, h{d} {}

	int getArea() const { return w * h; }

};

//void foo(Rect r) // call by value : ���纻�� ���� overhead!!!	   
void foo(const Rect& r) // �ݵ�� �̷��� �ؾ� �մϴ�.
{
	int n = r.getArea();  	// ???
}

int main()
{
	Rect r(1, 1, 10, 10);	// �����ü �ƴ�. 
	int n = r.getArea();	// ok

	foo(r);	//
}


