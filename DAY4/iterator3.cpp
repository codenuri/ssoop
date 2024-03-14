#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. past the end

	auto p1 = s.begin();	// s의 1번째 요소를 가리키는 반복자
	auto p2 = s.end();		// s의 마지막이 아닌 마지막 다음을 가리키는 반복자
							// => 절대 * 연산으로 접근하면 안됩니다.
	*p1 = 10; // ok
//	*p2 = 10; // runtime error 발생할수 있습니다.
			  // 절대 s.end()로 얻는 반복자를 * 하지 마세요
			  // 흔히 "s.end()" 로 얻는 것을 "past the end"
		  
	// p2는 !=, == 연산으로 끝에 도달했는지 확인하기 위해서만 사용해야 합니다.
	// => 아래 코드처럼.
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
			  	
}