#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// �ٽ� 1. �����ڴ� ������ ����� �ִ�.
	Person(const std::string& n, int a)
	{
		std::cout << "������1 ȣ���" << std::endl;
		name = n;
		age = a;
	}	

	Person()
	{
		std::cout << "������2 ȣ���" << std::endl;
		name = "unknown";
		age = 0;
	}

	// �Ҹ��� : "~Ŭ�����̸�" ����� �Լ�
	//			��ȯ���� ���ڰ� ����. ���� �Ѱ��� ����� �ִ�.
	//		    ��ü�� �ı� �ɶ� ȣ��.
	~Person() { std::cout << "�Ҹ���" << std::endl; }
};

int main()
{
	Person p1("kim", 28); // ������1 ȣ��
	Person p2;			  // ������2 ȣ��

} // <= p1, p2 �ı�. �Ҹ��� �Լ� ȣ��


// ������ ����
// => ��ü ������ ��� ����Ÿ�� �ʱ�ȭ �ϱ� ���ؼ�
// => private ��� �ʱ�ȭ

// �Ҹ���
// => �ʿ��� ��츸 ����� �˴ϴ�.
// => �ʿ����� ������ ���� �ʿ� �����ϴ�.
// => ���Ŀ� ����ϴ� ���� ���ɴϴ�