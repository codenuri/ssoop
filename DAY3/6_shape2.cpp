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

		}
		else if (cmd == 2)
		{

		}
		else if (cmd == 9)
		{

		}
	}
}



