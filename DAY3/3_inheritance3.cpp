#include <iostream>

class Base
{
	int data;
public:
	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};

// ��ӿ��� "������/�Ҹ���" ȣ���� ��Ȯ�� ����
// => �Ʒ� �ּ� ���� �ϼ���

class Derived : public Base
{
public:
	// ����� �ڵ�		// �����Ϸ��� ������ �ڵ�
	Derived()			// Derived() : Base() 				
	{ 
		std::cout << "Derived()" << std::endl; 
	} 
	Derived(int a)		// Derived(int a) : Base() <= �����Ϸ� �߰� �ڵ�� �׻�
	{												 // Base �� ����Ʈ ������ ȣ��
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived()      
	{ 
		std::cout << "~Derived()" << std::endl; 

		// �Ҹ��ڴ� Derived �����ΰ� ���� �������
		// Base::~Base()    // ��� Ŭ���� �Ҹ��� ȣ��
	}
};
int main()
{
//	Derived d1;		// call Derived::Derived()
	Derived d2(5);  // call Derived::Derived(int)
}



