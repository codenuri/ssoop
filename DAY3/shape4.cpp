#include <iostream>
#include <vector>
// 5. 이 예제를 실전에서 만들게 된다면
// => Shape 를 제일 먼저 설계하게 됩니다.
// => 모든 도형의 공통의 특징을 설계 하고
// => 파생 클래스가 override 하는 함수는 virtual 만들고
// => 파생 클래스가 override 할 필요 없는 것은 non-virtual 로 설계 하게 됩니다



class Shape 
{
	// 모든 도형은 색상이 있습니다.
	int color;
public:
	// 아래 2개의 멤버 함수는 "virtual" 로 할까요 ? "non-virtual"로 할까요?
	// => 파생 클래스가 override 할 필요 없다. non-virtual
	void set_color(int c) { color = c;}
	int get_color() const { return color;}


	// 아래 함수는 virtual ? non-virtual
	// => 모든 도형은 면적을 구하는 방법이 다르다.
	// => override 하게 되므로 virtual
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
	}	
}




