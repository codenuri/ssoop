#include <iostream>
#include <vector>
#include <list>

// reverse_iterator
int main()
{
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

//	auto p1 = c.begin(); 
//	auto p2 = c.end();

	// 역반복자(reverse iterator) 꺼내기
	auto p1 = c.rbegin(); 
	auto p2 = c.rend();

	// ++ 대신 --로 만들면 되는데, 왜?? reverse iterator 를 만들었나요 ?

	// 아래와 같이 정방향으로 다양한 알고리즘을 작성했는데, 
	// 위처럼 반복자 꺼내는 방법만 변경하면
	// 아래 코드는 변경할 필요 없이 거꾸로 동작


	while (p1 != p2)
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

}

