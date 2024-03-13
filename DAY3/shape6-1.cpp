#include <iostream>
#include <vector>


class Shape 
{
	int color;
public:
	int type = 0;
	Shape() { type = 0;}

	void set_color(int c) { color = c;}
	int get_color() const { return color;}

	virtual int get_area() const { return 0; }

	virtual void draw() const { std::cout << "draw Shape" << std::endl; }
};





class Rect : public Shape
{
public:
	Rect() { type = 1;}
	virtual void draw() const { std::cout << "draw Rect" << std::endl; }
};
class Circle : public Shape
{
public:
	Circle() { type = 2;}
	virtual void draw() const { std::cout << "draw Circle" << std::endl; }
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

			// 아래 코드는 "OCP" 를 만족할수 없는 좋지 않은 코드 입니다.
			// 새로운 도형 추가시 아래 코드는 변경(추가) 되어야 합니다.
			switch( v[k]->type )
			{
				// 아래는 그냥 Rect, Circle 를 만들지만, 
				// 정확히 하려면 v[k] 번째 도형의 모든 데이타를 복제해야합니다.(다음예제참고)
				case 1: v.push_back( new Rect); break;
				case 2: v.push_back( new Circle); break;
			}
		}
	}	
}



