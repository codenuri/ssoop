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
	// => 하지만 아래 처럼 직접 사용하지마세요, 
	// => 복잡해 보이고, 컨테이너 변경시 아래 코드도 변경됩니다.
	// std::list<int>::iterator p1 = s.begin(); 

	// #2. auto 권장
	// => 간결하고,
	// => 컨테이너 변경해도 아래 코드는 수정되지 않습니다.
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