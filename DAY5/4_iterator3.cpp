#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. past the end

	auto p1 = s.begin();	// s의 1번째 요소를 가리키는 반복자
	auto p2 = s.end();		// s의 마지막이 아닌 마지막 다음을 가리키는 반복자

	*p1 = 10; // ok
	*p2 = 10; // runtime error
			  // s.end() 로 얻은 반복자는 * 연산하면 안됩니다.
			  // past the end iterator	  
			  
	// s.end()로 얻는 반복자는 == 와 != 연산만 사용하세요	  
	// => 아래 코드 처럼만 사용해야 합니다.
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
			  	
}