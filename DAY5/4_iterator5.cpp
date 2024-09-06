#include <iostream>
#include <vector>
#include <list>

// reverse_iterator
int main()
{
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

//	auto p1 = c.begin(); 
//	auto p2 = c.end();

	// reverse 반복자 얻기
	auto p1 = c.rbegin();  // 10 을가리킨다
	auto p2 = c.rend();    // 1 보다 한개 앞
							// ++p1 : <--- 으로 이동

	while (p1 != p2)
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

}

