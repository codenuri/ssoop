#include <iostream>


class Car
{
	int color = 0;
	static int cnt; 
public:
	Car() { ++cnt; }
	~Car() { --cnt; }


//	int get_count() const { return cnt; }	// ��ü�� �־�߸� ȣ�Ⱑ��
											// "c1.get_count()"

	static int get_count() { return cnt; }
							// => static member �Լ�
							// => ��ü ���� ȣ�� ����
							// => Car::get_count() �� ȣ��
							// => ��ü�� ������� ȣ�Ⱑ���ϹǷ�
							//    "const member function" ���� ������¾���

};
int Car::cnt = 0; 

int main()
{
	std::cout << Car::get_count() << std::endl;

	Car c1;
	Car c2;

	std::cout << Car::get_count() << std::endl;

}
