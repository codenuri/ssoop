#include <iostream>
#include <vector>
#include <list>
#include <algorithm>



int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// k�� ��� ã��
	int k = 3;

	auto ret1 = std::find_if(v.begin(),	v.end(),

		[ k ](int a) { return a % k == 0; });

	// [k]( ) {} : �������� k �� ����ǥ���� �ȿ��� ����ϰڴٴ� ����
	//			   "�������� ĸ��" ��� ǥ���մϴ�.

	//================================================
	// ���ڵ带 C++ �����Ϸ��� �Ʒ� ó�� �����մϴ�.

	class CompilerGeneratedName
	{
		int k;
	public:
		CompilerGeneratedName(int n) : k(n) {}

		auto operator()(int a)
		{
			return  a % k == 0;
		}
	};
	auto ret2 = std::find_if(v.begin(), v.end(),
				CompilerGeneratedName{k});

	// �ᱹ �� �ڵ�� lamda3.cpp �� IsDivide�� ������ �����մϴ�.

}