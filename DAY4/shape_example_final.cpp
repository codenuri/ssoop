#include <iostream>
#include <vector>

class Shape 
{
	int color;
public:
	virtual ~Shape() {} 
	void set_color(int c) { color = c;}
	int get_color() const { return color;}

	// 가상함수 : 파생클래스가 override 하지 않으면 기본 구현 제공해 준다는 의도
	// 순수가상함수 : 파생 클래스에게 반드시 해당 멤버 함수를 만들라고 지시하는 의도

	// Shape 의 draw 는 "가상함수" 보다 "순수 가상함수"로 하는 것이 좋다.
	// => Shape 는 추상적 개념이므로 "그릴수는 없다"
	virtual void draw() const = 0;

	virtual Shape* clone() const = 0;


	// 방법1. 순수 가상함수로 하면 "반드시 파생 클래스에서 override 해야 한다."
//	virtual int get_area() const  = 0;

	// 방법2. 기반 클래스가 기본 구현을 "잘못된 값(-1 등)" 을 반환하고
	// => get_area() 호출 결과가 -1 이면 "면적구할수 없음" 을 의미 한다고 매뉴얼 작성
	// => 파생 클래스는 override 해도 되고, 안해도 된다.
	virtual int get_area() const { return -1; }
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
		else if ( cmd == -1 )
		{
			break;
		}	
	}	

	for( auto p : v)
		delete p;
}

