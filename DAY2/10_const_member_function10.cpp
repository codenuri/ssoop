#include <iostream>
#include <string>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x{ a }, y{ b } {}

	// 객체의 상태를 문자열로 반환하는 함수
	// => C#, Java 에서 널리 사용되는 함수
	const char* to_string()
	{
		static char s[32];
		sprintf(s, "x = %d, y = %d", x, y);

		return s;
	}
};
int main()
{
	Point pt(1, 2);
	std::cout << pt.to_string() << std::endl;
}