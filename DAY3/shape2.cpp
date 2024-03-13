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
//			Rect rc;			// 이렇게 만들면 {} 벗어날때 즉시 파괴 됩니다.
			Rect* p = new Rect; // 이렇게 해야, 사용자가 제거할때 까지 계속사용가능

			v.push_back(p);
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
// 위 코드는 어디서 왜??? 에러 일까요 ??
// 해결책은 뭘까요 ? => 다음 단계에서 해결



