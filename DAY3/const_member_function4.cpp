#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point( int x, int y) : x{x}, y{y} {}  // 초기화 리스트에서는 이름이 동일해도 ok

	const char* to_string()
	{
		char s[32];
		sprintf(s, "(%d, %d)", x, y);
		return s;
	}
};
int main()
{
	Point pt{1,2};
	std::cout << pt.to_string() << std::endl;
}


