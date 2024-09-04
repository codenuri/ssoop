#include <iostream>
#include <vector>

// 코드 정리

class Shape
{
	int color;
public:
	virtual ~Shape() {}  // 기반 클래스 소멸자는 "virtual" 이어야 한다


	void set_color(int c) { color = c; }

	virtual	int get_area() const { return 0; }

	virtual void draw() { std::cout << "draw shape\n"; }
};

class Rect : public Shape
{
public:
	void draw() override { std::cout << "draw rect\n"; }
};
class Circle : public Shape
{
public:
	void draw() override { std::cout << "draw circle\n"; }
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



