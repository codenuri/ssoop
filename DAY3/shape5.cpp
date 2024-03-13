#include <iostream>
#include <vector>

// 6. OCP 개념
// => 기능 추가에 열려 있고(Open, 새로운 클래스 등이 추가되어도 )
//    코드 수정에는 닫혀 있어야(Close, 기존 코드는 수정되지 않게 )
//    만들라는 원칙(Principle)

// Open-Close Principle

// 객체지향 S/W 의 5대 원칙 : SRP, OCP, LSP, ISP, DIP => SOLID


// 7. 다형성은 OCP 를 만족하는 아주 좋은 코딩 스타일 이다.!!




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
				s->draw(); 	// 다형성(polymorphism)	
							// => 동일한 표현식이 상황(실제 객체의 종류)에 따라
							//    다르게 동작하는 것

			// 객체지향 프로그래밍의 3가지 특징
			// 1. 캡슐화(private, public)
			// 2. 상속(inheritance)
			// 3. 다형성(polymorphism)
		}
	}	
}




