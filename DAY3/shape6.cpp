#include <iostream>
#include <vector>


class Shape 
{
	int color;
public:
	void set_color(int c) { color = c;}
	int get_color() const { return color;}

	virtual int get_area() const { return 0; }

	virtual void draw() const { std::cout << "draw Shape" << std::endl; }
};





class Rect : public Shape
{
public:
	virtual void draw() const { std::cout << "draw Rect" << std::endl; }
};
class Circle : public Shape
{
public:
	virtual void draw() const { std::cout << "draw Circle" << std::endl; }
};

class Triangle : public Shape
{
public:
	virtual void draw() const { std::cout << "draw Triangle" << std::endl; }
};

int main()
{
	std::vector<Shape*> v; 

	while(1)
	{
		int cmd;
		std::cin >> cmd;

		if ( cmd == 1 )
		{
			v.push_back(new Rect);
		}
		else if ( cmd == 2 )
		{
			v.push_back(new Circle);
		}
		else if ( cmd == 9 )
		{
			for( auto s : v)	
				s->draw(); 	
		}
		else if ( cmd == 8 )
		{
			std::cout << "몇번째 만들었던 도형을 복사할까요 >> ";

			int k;
			std::cin >> k;

			// k 번째 도형의 복사본을 생성해서 v에 추가 합니다.
			// 그런데, k번째 도형이 어떤 종류 일까요 ?
			// 어떻게 해야 할까요 ?
		}
	}	
}
// chcp 65001 한후에서
// 실행해서, 도형 몇개 만들고, 9번 입력해서 그려보고,  8번 입력해 보세요




