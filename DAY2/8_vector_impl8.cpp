// vector3.cpp ����
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v; // ũ�Ⱑ 0 �� vector �� ����.
	int n = 0;

	while (1)
	{
		std::cin >> n;
		if (n == -1) break;
		v.push_back(n); // �ڵ����� �޸� �����ϸ鼭 �ֱ�
	}
	std::cout << "�Էµ� ����       : " << v.size() << std::endl;
}

// C++ ǥ�ؿ��� class �������� ���� ���� Ŭ������ �̹� �����մϴ�.
// => ��κ� template ���� �Ǿ� �ֽ��ϴ�
// => "STL" �̶�� �մϴ�. "Standard Template Library"

// => std::string, std::vector, std::list, std::set(tree)
//    std::unordered_set(hash), std::thread, std::second


// C++ �� ���ؼ�

// 1. std::vector ���� Ŭ������ ����� ���� �˾ƾ� �մϴ�.
// => Ŭ���� ����

// 2. std::vector �� ������ �˾ƾ� �մϴ�.
// => ���̺귯�� Ȱ���.

// ���� : python �� list �� std::vector �� ����

// s = [1, 1, 1]; // std::vector<int> v(1,3) �� ���� ����
// s.append(2);   // v.push_back(2)