#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// �Լ� : ������ ������ ���°� �����ϴ�.

// �Լ���ü : ���۵� �ְ�, ���µ� �ֽ��ϴ�.(��� ����Ÿ�� �ִٴ� �ǹ�)

bool foo(int a) { return a % 3 == 0; }



// �Ʒ� �ڵ� �߻����غ�����
struct IsDivide
{
	int value;

	IsDivide(int n) : value(n) {}

	bool operator()(int n) { return n % value == 0; }
};




int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	int k = 3; 

	IsDivide f(k); // f�� ���������� 3�� ����

	bool b = f(10); // f�� �����Լ� �Դϴ�.
					// bool b = 10 % k  �� �ǹ� �Դϴ�.
					
					// => �ᱹ f�� "k���� ĸ���� �����Լ�" �Դϴ�

	auto ret1 = std::find_if(v.begin(), v.end(), f );


	// �ѹ��� ����Ѵٸ� �ӽð�ü��
	auto ret1 = std::find_if(v.begin(), v.end(), IsDivide{ k } );
						// => "IsDivide{k}" �� �Լ� ���ڷ�
						// => "�����Լ� + �������� k�� ��" �� �������� 
}

// closure : �ڽ��� ���� ������ ���������� ĸ���Ҽ� �ִ�
//			 "���ڷ� ���� ������" �Լ�(��ü)

// C++ �Ϲ��Լ� : Closure �� �ɼ� �����ϴ�.
//     �Լ���ü : Closure �� �ɼ� �ֽ��ϴ�.