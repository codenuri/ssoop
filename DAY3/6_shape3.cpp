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
			v.push_back(new Rect );
		}
		else if (cmd == 2)
		{
			v.push_back(new Circle); 
		}
		else if (cmd == 9)
		{
			// ��� ������ ȭ�鿡 �׸���
			for (auto s : v) // ���ڵ忡�� s �� Ÿ���� "Shape*"
				s->draw();   // �׷���, Shape ���� draw �� ����.
							 // ��� Ŭ���������ͷδ� 
							 // "�Ļ� Ŭ������ �߰��� ��� ���� �ȵ�"
							 // �׷��� ���⼭ ����!!

		}
	}
}

// ��𿡼� ?  �� ? �� �ڵ尡 �����ϱ�� ?
// �ذ�å�� ����� ??
// => �����ҽ����� ����


