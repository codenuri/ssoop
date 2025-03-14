// 예제1     149 page
#include <iostream>
#include <vector>


class Shape
{
	int color = 0;
public:

};

class Rect : public Shape
{
public:
	void draw() const { std::cout << "draw rect\n"; }
};

class Circle : public Shape
{
public:
	void draw() const { std::cout << "draw circle\n"; }
};

int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if      (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);
		else if (cmd == 9)
		{
			for (auto s : v) // s 는 Shape* 입니다.
				s->draw();	// A. error
		}
	}
}
// 위 코드는 어디서? 왜 ?에러일까요 ?
// => A 부분. 
// => s의 타입이 Shape* 인데, Shape 에는 draw 가 없습니다.
// => Shape* 로는 Shape 의 멤버만 접근가능하고
//    Rect, Circle 이 추가한 멤버 접근 안됨. 
// 
// 해결책은 뭘까요 ?
// => 다음 소스에서!!!
// 이소스는 에러의 이유만 정확히 알아 두세요


