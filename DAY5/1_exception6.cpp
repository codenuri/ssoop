#include <iostream>

// ���ܰ� �߻��ؼ� catch �� �̵��Ҷ�
// => �߰��� ������� ��� ���������� �����ϰ� �ı� �˴ϴ�.
// => stack unwinding ( ���� Ǯ�� )����մϴ�.

// ���� : �Ҹ��ڴ� ���� ���ܸ� ������ �ȵ˴ϴ�.

class Point
{
public:
	~Point() 
	{ 
		std::cout << "~Point\n"; 
//		throw 1;
	}
};

void goo()
{
	Point p2;
	throw 1; 
	std::cout << "goo\n";
}
void foo()
{
	Point p2;
	goo();
	std::cout << "foo\n";
}
int main()
{
	try
	{
		foo();
	}
	catch (int e) {}
}