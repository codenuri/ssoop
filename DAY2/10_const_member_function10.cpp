#include <iostream>
#include <string>

class Point
{
	int x, y;
	
	// mutable 멤버 데이타
	// => 상수 멤버 함수에서도 "값을 수정할수 있도록 해달라"
	// => to_string() 처럼, 논리적으로는 "상수 멤버 함수" 가 맞지만
	// => 다양한 테크닉상 멤버의 변경이 필요한 경우 사용. 
	mutable char cache[32];
	mutable bool valid = false;
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