#include <iostream>

// temporary - 127 page ( �Լ��� ��ü�� ������ ��ȯ�Ҷ� )

class Point
{
public:
	int x, y;

	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
int main()
{
//	Point pt(1, 2); // named object : �̸��� �ִ� ��ü
					// => �̸�(pt) �� �ֱ� ������ ���� ���忡���� ���ٰ���
					// ���� : �ڽ��� ������ {}�� ����� �ı�

//	Point (1, 2);	// unnamed object(temporary, "�ӽð�ü" ������մϴ�.)
					// => �̸��� �����Ƿ� �������忡�� ���� �ȵ�.
					// ���� : �ڽ��� ������ ������ ��( ; )
					
					// => Point ��� �Լ� ȣ���� �ƴմϴ�.
					// => Point �� Ŭ���� �̸��̹Ƿ� 
					//	  ��ü�� ����� ǥ���. 

	Point(1, 2), std::cout << "X\n"; 

	std::cout << "-------" << std::endl;
}




