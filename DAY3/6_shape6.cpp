#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
	virtual ~Shape() {}  


	void set_color(int c) { color = c; }

	virtual	int get_area() const { return 0; }

	// 가상함수     : 파생 클래스가 override 하지 않으면 디폴트 구현 제공한다는 의도
	// 순수가상함수 : 파생 클래스에게 반드시 구현부를 제공하라는 의도

//	virtual void draw() { std::cout << "draw shape\n"; }
	virtual void draw() = 0;  // 이코드가 좋은 코드!!

	// 주의. 위 선언도 없다면(순수가상함수도 없다면)
	// Shape* 로 draw 호출 안됨.

};


class Rect : public Shape
{
public:
//	void draw() override { std::cout << "draw rect\n"; }
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



