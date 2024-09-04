#include <iostream>
#include <vector>

// #1. 모든 파생클래스의 공통의 특징이 있다면
//     기반클래스에도 있어야 한다.
//     모든 도형을 그릴수 있다면, draw 는 Shape 에도 있어야 한다.
//     => 객체지향 디자인의 원칙!!!


class Shape
{
	int color;
public:
	void draw() { std::cout << "draw shape\n"; }
};

class Rect : public Shape
{
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
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
		{
			v.push_back(new Rect);
		}
		else if (cmd == 2)
		{
			v.push_back(new Circle);
		}
		else if (cmd == 9)
		{
			for (auto s : v)
				s->draw();   
			

		}
	}
}

// 방법 #1.
// => Shape* 인 s 를 "Rect*" 나 "Circle*"로 캐스팅후 사용하자.!
// => 그런데, s가 가리키는 곳이 Rect 인지 Circle 인지 알수 없다.

// 방법 #2.
// => Shape 에도 draw 를 만들자!


