#include <iostream>
#include <vector>

// 145page ~
// 파워 포인트 같은 프로그램을 만드는 것을 생각해 봅시다.

// 1. 모든 도형을 "타입(class)" 로 설계하면 편리합니다.

// 2. 모든 도형의 공통의 기반 클래스가 있다면 모든 도형을 묶어서 
//    관리할수 있습니다.
//    모든 도형은 색상등 공통의 특징을 가지게 됩니다.

class Shape 
{
};

class Rect : public Shape
{
//	int x, y, w, h; 와 생성자 생략.. 
public:
	void draw() const { std::cout << "draw Rect" << std::endl; }
};
class Circle : public Shape
{
public:
	void draw() const { std::cout << "draw Circle" << std::endl; }
};
int main()
{
//	std::vector<Rect*> v; // Rect 객체만 보관 가능	
	std::vector<Shape*> v; // 모든 종류의 도형은 보관 가능
}



