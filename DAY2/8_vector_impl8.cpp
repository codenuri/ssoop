// vector3.cpp 복사
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v; // 크기가 0 인 vector 도 가능.
	int n = 0;

	while (1)
	{
		std::cin >> n;
		if (n == -1) break;
		v.push_back(n); // 자동으로 메모리 증가하면서 넣기
	}
	std::cout << "입력된 갯수       : " << v.size() << std::endl;
}

