#include <iostream>

class Point
{
	int x;
	int y;

	// mutable 멤버 데이타 : 상수 멤버 함수 안에서도 값을 변경할수 있게 해달라.
	//						멤버함수가 논리적으로는 "상수 멤버함수"가 되어야 하는데
	//						실제 구현에서, 멤버데이타의 변경이 필요 할때 사용.
	mutable char cache[32];
	mutable bool cache_valid = false;
public:
	Point( int x, int y) : x{x}, y{y} {}

	char* to_string() const 
	{
		if( cache_valid == false )
		{
			sprintf(cache, "(%d, %d)", x, y);
			cache_valid = true;
		}
		return cache;
	}
};


int main()
{
	Point pt{1,2};
	std::cout << pt.to_string() << std::endl;
	std::cout << pt.to_string() << std::endl;
}


