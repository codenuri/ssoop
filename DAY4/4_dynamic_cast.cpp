#include <iostream>

class Animal
{
public:
	int age;

	virtual ~Animal() {}
};

class Dog : public Animal
{
public:
	int color;
};

int main()
{
	Animal a;
	Dog    d;

//	Animal* p = &d;
	Animal* p = &a;


	std::cout << p << std::endl;

	// static_cast : ������ �ð� ĳ����
	//				 ���� p �� ����Ű�� ��ü�� Dog �� �ƴ� Animal
	//				 ������, �����Ϸ��� p�� ����Ű�� ���ü Ÿ���� �˼�����
	//				 ����, �Ʒ� ĳ������ �׻� ����..
	//				 ��, "pd->color = 10" ó�� ���� �߸��� �޸�����
	//			     �׷���, static_cast �� Ȯ���� �������� ���.
	//				"�������ϴ� �����ϴ�."
//	Dog* pd = static_cast<Dog*>(p);
//	std::cout << pd << std::endl;


	// dynamic_cast : ����ð� ĳ����
	//				  �����ؾ� �ϹǷ� ������� �ֽ��ϴ�.
	//				  p �� ����Ű�� ��ü�� Dog �� �ƴϸ� "0" ��ȯ
	//				  "�����Լ��� �ִ� Ÿ�Ը� ��밡��"
	//				  �����Լ� ���̺��� "Ÿ������"�� �����ϰ� �ֱ� ������. 

	Dog* pd = dynamic_cast<Dog*>(p);
	std::cout << pd << std::endl;

	
	//	pd->color = 10;
}

