#include <iostream>
#include <vector>
#include <list>

// reverse_iterator
int main()
{
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

//	auto p1 = c.begin(); 
//	auto p2 = c.end();

	// reverse �ݺ��� ���
	auto p1 = c.rbegin();  // 10 ������Ų��
	auto p2 = c.rend();    // 1 ���� �Ѱ� ��
							// ++p1 : <--- ���� �̵�

	while (p1 != p2)
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

}
