#include <iostream>

int g = 10;
class Point
{
	// 권장 : 멤버데이타(필드)를 직접 초기화 할때는
	int x = 0;		// 이런 코드는 좋습니다.
	int y = ++g;	// 이런 코드는 절대 사용하지 마세요
public:	
	Point() {}				// : x{0}, y{++g} {}
	Point(int a) : y{a} {}	// : x{0}, y{a}   {}
};
int main()
{
	Point p1;
	Point p2(3);

	std::cout << g << std::endl; // 실행하지 말고 결과 예측해 보세요
								// => 11
}