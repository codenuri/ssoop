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
			// 모든 도형을 화면에 그리기
			for (auto s : v) // 이코드에서 s 의 타입은 "Shape*"
				s->draw();   // 그런데, Shape 에는 draw 가 없다.
							 // 기반 클래스포인터로는 
							 // "파생 클래스가 추가한 멤버 접근 안됨"
							 // 그래서 여기서 에러!!

		}
	}
}

// 어디에서 ?  왜 ? 위 코드가 에러일까요 ?
// 해결책은 뭘까요 ??
// => 다음소스에서 설명



