#include <iostream>

// 144 p

class Animal
{
public:
	// non-virtual : static binding �ش޶�� �ǹ�.
	//				 "������ Ÿ�Կ� ���� �Լ� ����"
	void cry1() { std::cout << "Animal cry1" << std::endl; } // 1


	// virtual : dynamic binding �ش޶�� �ǹ�
	//			 "����ð��� �����Ͱ� ����Ű�� ��ü �����ؼ� �Լ� ����"
	virtual void cry2() { std::cout << "Animal cry2" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	void cry1() { std::cout << "Dog cry1" << std::endl; }  // 2

	virtual void cry2() { std::cout << "Dog cry2" << std::endl; }  // 2
};


int main()
{
	Animal a;
	Dog    d;

	Animal* p = &d;

	p->cry1(); // static binding "Animal cry1"
	p->cry2(); // dynamic binding  "Dog  cry2"
}


