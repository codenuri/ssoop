#include <iostream>
#include <vector>


// 7. Prototype Pattern
// => 객체의 복사본을 만드는 패턴
// => 대부분의 객체 지향 프로그램에서 "copy & paste" 를 구현할때 사용하는 코딩기법


class Shape 
{
	int color;
public:
	void set_color(int c) { color = c;}
	int get_color() const { return color;}

	virtual int get_area() const { return 0; }

	virtual void draw() const { std::cout << "draw Shape" << std::endl; }

	// 자신의 복사본을 만드는 가상함수를 제공합니다.
	virtual Shape* clone() const 
	{
		Shape* p = new Shape;				// 도형을 만들고
		p->set_color( this->get_color() );  // 내 자신과 같은 색상으로 설정
		return p;
	}
};





class Rect : public Shape
{
public:
	virtual void draw() const { std::cout << "draw Rect" << std::endl; }

	virtual Shape* clone() const 
	{
		Rect* p = new Rect;				
		p->set_color( this->get_color() );  

		// Rect 만의 데이타도 모두 복사해야 합니다.

		return p;
	}
};


class Circle : public Shape
{
public:
	virtual void draw() const { std::cout << "draw Circle" << std::endl; }

	virtual Shape* clone() const 
	{
		Circle* p = new Circle;				
		p->set_color( this->get_color() );  
		
		// Circle 만의 데이타도 모두 복사해야 합니다.

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

			v.push_back( v[k]->clone() ); // 다형성!!!!
							// k번째 도형이 어떤 종류인지 조사할 필요없다.
							// 새로운 Triangle 이 추가되어도
							// 이 한줄은 변경될 필요 없다. OCP 만족

			// 단, Triangle 을 추가하게되면
			// => Triangle 을 만드는 사람이 clone() 도 적절하게
			//    override 해서 제공해야 한다.
		}
	}	
}


