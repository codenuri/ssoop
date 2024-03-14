// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. 반복자의 정확한 타입
	// => "컨테이너이름::iterator"

	// 타입을 직접 사용하면
	// 1. 복잡해 보이고
	// 2. 컨테이너 변경시 아래 코드도 변경되야 합니다.
//	std::list<int>::iterator p1 = s.begin(); 


	// 아래 처럼 auto 로 하면 "컨테이너를 변경해도 아래 코드는 변경되지 않습니다"
	auto p1 = s.begin(); 
	
	
}







/*
namespace std
{
	template<typename T>
	class list
	{
	public:
		class iterator
		{
		};
	};
}
*/