#include <iostream>

// 주의 사항!
class Point
{
public:
	int x;
	int y;
	
	// 초기화 리스트는 대입이 아닌 진짜 초기화 입니다.
	// 초기화 리스트 코드의 순서가 아닌, 멤버가 선언된 순서로 실행됩니다.
	// => 되도록, 멤버선언 순서대로 코드를 작성하세요
	//		  (2)    (1)
	Point() : y(10), x(y)
	{
	}
};

int main()
{
	Point pt;

	// 아래 코드의 결과를 예측해 보세요
	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // ?
}




