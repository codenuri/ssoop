// QA
#include <iostream>

// C++ ����� �������� �� ��Ÿ���� ����

class Base
{
public:
	virtual void foo(int a = 10) { std::cout << "Base : " << a << std::endl; }
};
class Derived : public Base
{
public:
	void foo(int a = 20) override { std::cout << "Derived : " << a << std::endl; }
};

int main()
{
	Base* p = new Derived;
	p->foo(); // ��� ������ ������
			  // "Derived : 10"
			
			  // "����ð� p�� ����Ű�� ��ü�� �����ؼ� -> foo( 10 )" ȣ��


	// ����Ʈ ���� ä��� �� : ������ �ð��� �����Ϸ��� ä���
	// �����Լ��� ȣ���ϴ� �� : ����ð��� �޸𸮸� �����ؼ�!!

	// ������ �ð� ������ ����ð� ������ ��� ������� ������
	// "�����Լ����� ����Ʈ ���� ������� ������.
	//  ����ߴٸ� override �Ҷ� �������� ������"


}