#include <iostream>
#include <vector>

// 149page ~
// 파워 포인트 같은 프로그램을 만드는 것을 생각해 봅시다.

// 1. 모든 도형을 클래스로 설계 해야 한다.

// 2. 모든 도형의 기반 클래스가 있다면..
// => 색상등의 공통의 특징을 제공할수 있고
// => 모든 도형을 한개의 컨테이너에 같이 관리할수 있다.

class Shape
{
	int color;
};

class Rect : public Shape
{
	// int x, y, w, h,  생성자등은 생략
public:
	void draw() { std::cout << "draw rect\n"; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "draw circle\n"; }
};

int main()
{
//	std::vector<Rect*> v; // Rect 객체만 보관 가능.
	std::vector<Shape*> v; // 모든 도형 객체를 보관가능
}



