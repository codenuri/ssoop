#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
	virtual ~Shape() {}  


	void set_color(int c) { color = c; }

	virtual	int get_area() const { return 0; }

	// �����Լ�     : �Ļ� Ŭ������ override ���� ������ ����Ʈ ���� �����Ѵٴ� �ǵ�
	// ���������Լ� : �Ļ� Ŭ�������� �ݵ�� �����θ� �����϶�� �ǵ�

//	virtual void draw() { std::cout << "draw shape\n"; }
	virtual void draw() = 0;  // ���ڵ尡 ���� �ڵ�!!

	// ����. �� ���� ���ٸ�(���������Լ��� ���ٸ�)
	// Shape* �� draw ȣ�� �ȵ�.

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


