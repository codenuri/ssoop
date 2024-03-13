#include <iostream>
#include <vector>



class Shape 
{
	int color;
public:
	virtual ~Shape() {} // 기반 클래스 소멸자는 "virtual" 로!!

	void set_color(int c) { color = c;}
	int get_color() const { return color;}

	virtual int get_area() const { return 0; }

	virtual void draw() const { std::cout << "draw Shape" << std::endl; }

	virtual Shape* clone() const 
	{
		Shape* p = new Shape;				
		p->set_color( this->get_color() ); 
		return p;
	}
};





class Rect : public Shape
{
public:
	virtual void draw() const override  { std::cout << "draw Rect" << std::endl; }

	virtual Shape* clone() const override 
	{
		Rect* p = new Rect;				
		p->set_color( this->get_color() );  
		return p;
	}
};


class Circle : public Shape
{
public:
	virtual void draw() const override { std::cout << "draw Circle" << std::endl; }

	virtual Shape* clone() const override 
	{
		Circle* p = new Circle;				
		p->set_color( this->get_color() );  

		return p;
	}
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

			v.push_back( v[k]->clone() ); 
		
		}
	}	
}


