#include <iostream>

// 104page ��� �Լ� �� ����

// => static ��� �Լ�


// => non-static ��� �Լ�
// ====> implicit object parameter ( C++98, this �� �����Ϸ��� ���� �߰�)
// ==========> const member function
// ==========> non-const member function
// 
// ====> explicit object parameter ( C++23, this �� ���� ���ڷ� �޴� ��)

//---------------------------------------

class Point
{
public:
	int x, y;

	Point(int a, int b) : x{a}, y{b} {}

	void set(int a, int b) { x = a; y = b; }

	// const member function
	// 1. ��� �Լ� ���ʿ� const �� ���̴� ����. 
	// 2. const ��� �Լ����� ��� ����Ÿ�� �����Ҽ� ����.
	// 3. �����ü�� const member function �� ȣ���Ҽ� �ִ�.
	// ���� : this �� const Point* �� �޴°�

//	void print()		// void print(Point* this)
	void print() const  // void print(const Point* this)
	{	
//		x = 10; // error. ��� ��� �Լ��� ��� ����Ÿ ���� �ȵ�

		std::cout << x << ", " << y << std::endl;
	}
	
}; 
int main() 
{
//	Point p(1, 2);
	const Point p(1, 2); // �ٽ�!! �Ʒ� 3���� �����غ�����

	p.x = 10;		// error. public ������ p�� �����ü�̹Ƿ�
	p.set(10, 20);	// error.
	p.print();		// error
					// ��, print �� ��� ����Լ���� ����
}

// �ٽ� #1. ��� ��ü�� non-const ��� �Լ��� ȣ���Ҽ� ����.
// �ٽ� #2. ��� ��ü�� const ��� �Լ��� ȣ���Ҽ� �ִ�.