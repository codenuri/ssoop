#include <string>

class Person1
{
	std::string name;
	int age;
public:
	Person1(const std::string& n, int a) 
	{
		// name �� ����Ʈ �����ڰ� ȣ�����
		name = n;	// name.operator=(n) ���� �����Ѱ�
					// ��, ���ڵ�� �������� ���� ������
		age = a;
	}
};

// Person1 p("kim", 20);








class Person2
{
	std::string name;
	int age;
public:
	// �ʱ�ȭ ����Ʈ
	// "���Կ����ڰ� �ƴ� �����ڸ� ���ؼ� �ʱ�ȭ �� �޶�� ��"
	// ��, ����� �ʿ��ߴٸ� "{}" �ȿ��� �ؾ� �մϴ�.
	Person2(const std::string& n, int a) : name(n), age(a)
//	Person2(const std::string& n, int a) : name{n}, age{a}
	{
		
	}
};

// Person p2("kim", 20);



int main()
{
	Person1 p1("kim", 29);	
	Person2 p2("kim", 29);
}