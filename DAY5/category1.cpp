// category1
#include <list>
#include <vector>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	auto p1 = s.begin();
	auto p2 = v.begin();
	
	// #1. 반복자도 종류가 있습니다. ( iterator category)
	p1 = p1 + 1;
	p2 = p2 + 1;
}