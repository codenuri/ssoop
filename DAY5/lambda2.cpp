#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int a) { return a % 3 == 0; }


int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// �־��� �������� "3�� ���"�� ã�� �ڵ�
	auto ret1 = std::find_if(v.begin(), v.end(), foo);


	// �־��� �������� "����ڰ� �Է��� k�� ��� "�� ã�� �ڵ带 �������
	int k = 3; // ����� �Է��̶�� ����

	auto ret2 = std::find_if(v.begin(), v.end(), foo);


}