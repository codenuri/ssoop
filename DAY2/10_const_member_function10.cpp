#include <iostream>
#include <string>

class Point
{
	int x, y;

	char cache[32];
	bool valid = false;
public:
	Point(int a, int b) : x{ a }, y{ b } {}

	// 객체의 상태를 문자열로 반환하는 함수
	// => C#, Java 에서 널리 사용되는 함수
	// => 객체의 상태를 읽기만 하므로 "const member function" 이어야 합니다.
	const char* to_string() const 
	{
		if (valid == false)
		{
			sprintf(cache, "x = %d, y = %d", x, y);
			valid = true;
		}

		return cache;
	}
};
int main()
{
	Point pt(1, 2);

	std::cout << pt.to_string() << std::endl;
	std::cout << pt.to_string() << std::endl;
}