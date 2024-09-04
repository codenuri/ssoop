#include <iostream>
#include <vector>

class Shape
{
	int color;
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
//			Rect rc; // 이렇게 만들면 {} 벗어날때 즉시 파괴 됩니다.
			Rect* p = new Rect;

			v.push_back(p);
		}
		else if (cmd == 2)
		{
			v.push_back(new Circle); // 위 코드는 그냥 이렇게 하면 됩니다.
		}
		else if (cmd == 9)
		{

		}
	}
}



