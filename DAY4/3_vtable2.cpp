#include <iostream>

// �����Ϸ��� vtable1.cpp �ڵ带 �Ʒ��� ������ ���·� �����ϰ� �˴ϴ�.

void* Animal_vtable[] = { Animal�� Ÿ������,
						  &Animal::cry,
						  &Animal::run };

class Animal
{
	void* vtptr = Animal_vtable; // �����Ϸ��� �߰��� ���
								 // "tvptr" �̶�� �̸��� �����Ϸ����ٴٸ�
	int age;
public:
	virtual void cry() {}
	virtual void run() {}
};


//--------------------
void* Dog_vtable[] = { Dog�� Ÿ������,
						  &Dog::cry,
						  &Animal::run };

class Dog : public Animal
{
	void* vtptr = Dog_vtable;

	int color;
public:
	virtual void cry() override {}
};

int main()
{
	Animal a1, a2;
	Dog    d;

	Animal* p = &d;
	p->cry();	

	// 1. Animal Ŭ������ �����ؼ� cry �� ���° 
	//    �����Լ� ���� ���� => 1��° �����Լ�

	// 2. "p->vtptr[1]()" ��� ���� �ڵ� ����

	// 3. ����ð��� �� �ڵ带 ����
	// => �ᱹ �޸𸮿� �ִ� �����Լ� ���̺����� �Լ� �ּҸ� ������ �۾�"
	//    �� �����ؼ� ȣ���ϴ� ��. 

}

// �����Լ��� �������

// �޸� ����
// 1. Ŭ������ �Ѱ��� �����Լ� ���̺�
// => �����Լ��� 1000�� �̰�, 32��Ʈ ȯ�� => 4K 
// => 2�ܰ��� �Ļ� Ŭ������ ����� => 12K 

// 2. ��ü�� �Ѱ��� "vtptr" �߰�

// ����
// 1. ���� ȣ���� �ƴ϶� "�޸𸮿��� �Լ� �ּҸ� ������" ȣ��

// 2. �����Լ��� �ζ��� ġȯ�ɼ� ����.
// �ζ��� ġȯ : ������ �ð��� �����Ϸ��� ����
// �����Լ�    : ����ð��� �Լ��� ������.


