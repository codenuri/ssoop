#include <iostream>
#include <vector>
#include <list>
#include <algorithm>



int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };


	auto ret1 = std::find_if(v.begin(), 
							 v.end(), 
							 [](int a) { return a % 3 == 0; } );
	//================================================
	// ���ڵ带 C++ �����Ϸ��� �Ʒ� ó�� �����մϴ�.

	class CompilerGeneratedName
	{
	public:
		auto operator()(int a) 
		{ 
			return a % 3 == 0; 
		}
	};
	auto ret2 = std::find_if(v.begin(), v.end(), CompilerGeneratedName{} );

}