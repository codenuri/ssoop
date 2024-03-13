#include <iostream>
#include <vector>

// 3. 모든 도형의 공통의 특징(draw()) 는 반드시 기반 클래스(Shape)에도 있어야 한다.
//    그래야 vector<Shape*> 로 도형을 관리할때
//    draw() 를 사용할수 있게 된다.

// 4. 기반 클래스의 멤버 함수중에서 "파생클래스가 override 하게 되는 것" 은
//    반드시 가상함수로 해야 한다.

class Shape 
{
public:
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
			for( auto s : v)	// v는 vector<Shape* > 이므로 
				s->draw(); 		// s는 Shape* 타입입니다.
								// 이 코드가 컴파일 되려면 Shape 안에 
								// draw() 가 있어야 합니다.
								// "upcasting1.cpp" 의 3가지 핵심 참고
		}
	}	
}




