// 4_iterator3-1
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	for (auto e : c)
	{
		std::cout << e << ", ";
	}

	// �� �ڵ��� ������ �˾� ���ô�.(C#, java, python ��� ����)
	// �� �ڵ带 �����Ϸ��� �Ʒ� ó�� ����

	auto first = c.begin();
	auto last = c.end();

	for (; first != last; ++first)
	{
		auto e = *first;
		//------------------------------
		std::cout << e << ", ";
	}
}
