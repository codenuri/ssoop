#include <iostream>

int main()
{
	// std::cout 
	// => std::ostream �̶��  Ÿ���� ��ü(��������)

	// #1. ���� ���� ����ص� �˴ϴ�.
	// => �Ʒ� os �� std::cout �� �����̹Ƿ� ���� ����
	std::ostream& os = std::cout;

	os << "hello" << std::endl;


	// #2. const ������ ������� ������
	//     ��� �������δ� "operator<<" ����Ҽ� �����ϴ�
	const std::ostream& cos = std::cout;

	cos << "hello"; // error. �� �����ϱ�� ? 
//  cout.operator<<("hello")  �ε�, cout ��� ��ü �Դϴ�.
	//					      => �׷���, ��� ��ü�� �������Լ��� ȣ�Ⱑ��
	//						  => operato<< �� �������Լ� �ƴմϴ�.
}