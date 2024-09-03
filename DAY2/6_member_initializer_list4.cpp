#include <iostream>

// 주의 사항!
class Point
{
public:
	int x;
	int y;

	// 코드가 아래 처럼되어 있어도 "실행되는 순서" 는 x 가 먼저 초기화됩니다.
	// => 멤버 데이타가 선언된 순서대로 실행(초기화)
	//Point() : y{0}, x{y}

	// 권장 : 항상 초기화 리스트를 만들때는 
	//        멤버가 선언된 순서대로 작성하세요
	//        () 도 가능하고 {} 가능한데, C++11 이후 {} 권장
	Point() : x{ 0 }, y{ 0 }
	{
	}
};

int main()
{
	Point pt;

	// 아래 코드의 결과를 예측해 보세요
	std::cout << pt.x << std::endl; // 0
	std::cout << pt.y << std::endl; // 0
}




