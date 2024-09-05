
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { }
	~Point() { std::cout << "~Point()" << std::endl; }
};

void draw_line(const Point& from, const Point& to) {}

int main()
{
	/*
	// (1,1) ~ (5,5) 에 선을 그리고 싶습니다.
	Point p1(1,1);
	Point p2(5,5);

	draw_line(p1, p2); // 이렇게 하면 p1, p2 는
						// 함수 호출뒤에도 계속 메모리에 있고
						// {} 을 벗어나야 파괴 됩니다.
	*/
	// 임시객체로 전달
	// => 인자 전달에만 사용되고,
	// => 함수 호출이 종료 되면 파괴 됩니다.
//	draw_line( Point(1, 1), Point(5, 5) );
				// => 임시 객체 만들때 () 사용하면 함수호출 처럼 보입니다.
	
	draw_line(Point{ 1, 1 }, Point{ 5, 5 } );
				// => () 대신 {} 초기화를 사용하면
				//    확실히 함수 호출과는 구분 됩니다. 권장


	std::cout << "-----" << std::endl;
}





