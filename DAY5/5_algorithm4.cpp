#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


bool foo(int a) { return a % 3 == 0; }


int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };


	auto ret1 = std::find_if(v.begin(), v.end(), foo);




	if (ret2 == v.end())
	{
	}
	else
	{
		std::cout << *ret2 << std::endl; // 9 
	}

}