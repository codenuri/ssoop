#include <iostream>
#include <vector>

// #1. ��� �Ļ�Ŭ������ ������ Ư¡�� �ִٸ�
//     ���Ŭ�������� �־�� �Ѵ�.
//     ��� ������ �׸��� �ִٸ�, draw �� Shape ���� �־�� �Ѵ�.
//     => ��ü���� �������� ��Ģ!!!

// #2. ��� Ŭ���� ��� �Լ��� �Ļ� Ŭ������ override �ϰ� �Ǵ� ����
//	   "virtual" �� �ؾ� �Ѵ�.

class Shape
{
	int color;
public:
	virtual void draw() { std::cout << "draw shape\n"; }
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

// ��� #1.
// => Shape* �� s �� "Rect*" �� "Circle*"�� ĳ������ �������.!
// => �׷���, s�� ����Ű�� ���� Rect ���� Circle ���� �˼� ����.

// ��� #2.
// => Shape ���� draw �� ������!

