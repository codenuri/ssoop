#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point( int x, int y) : x{x}, y{y} {}  // 초기화 리스트에서는 이름이 동일해도 ok

	// 객체의 상태를 문자열로 반환하는 함수
	// => const member function 으로 할까요 ? 말까요 ?
	char* to_string() const 
	{
		static char s[32];
		sprintf(s, "(%d, %d)", x, y);
		return s;
	}
};
int main()
{
//	Point pt{1,2};
	const 	Point pt{1,2};
	std::cout << pt.to_string() << std::endl;
}


