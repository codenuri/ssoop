#include <iostream>
#include <vector>


class Shape 
{
};

class Rect : public Shape
{
public:
	void draw() const { std::cout << "draw Rect" << std::endl; }
};
class Circle : public Shape
{
public:
	void draw() const { std::cout << "draw Circle" << std::endl; }
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
			Rect rc;
		}
		else if ( cmd == 2 )
		{
		}
		else if ( cmd == 9 )
		{
			for( auto s : v)
				s->draw();
		}
	}
	
}



