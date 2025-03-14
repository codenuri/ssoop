// 예제1     149 page
#include <iostream>
#include <vector>

// #4. 모든 파생 클래스(도형)의 공통의 특징은 반드시 기반 클래스(Shape)
//     에도 있어야 한다.
// => 문법적인 규칙이 아닌 디자인 원칙
// => 그래야 Shape* 로 해당 특징(draw) 를 사용할수 있다.


// #5. 기반 클래스의 멤버 함수중에서 파생 클래스가 다시 만들게 되는 것은
//     반드시 가상함수로 해야 한다.

class Shape
{
	int color = 0;
public:
	// 아래 함수는 virtual 로 할까요 ? non-virtual 할까요 ?
	// => 파생 클래스가 override 할 이유 없습니다. non-virtual!!
	void set_color(int c) { color = c; }

	// 면적을 구하는 방법은 도형마다 다릅니다.
	// => 파생 클래스가 override 해야 합니다.
	// => virtual 이 되어야 합니다.
	virtual int get_area() const { return -1; }

	virtual void draw() const { std::cout << "draw shape\n"; }
};



class Rect : public Shape
{
public:
	virtual void draw() const { std::cout << "draw rect\n"; }
};
class Circle : public Shape
{
public:
	virtual void draw() const { std::cout << "draw circle\n"; }
};

class Triangle : public Shape
{
public:
	virtual void draw() const { std::cout << "draw triangle\n"; }
};

int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);

		else if (cmd == 9)
		{
			for (auto s : v)
			{
				s->draw(); // 이 한줄의 코드는
							// "동일한 표현식(코드) 이지만
							//  상황(실제객체)에 따라 다르게 동작합니다."
							// => 다형성(polymorphism) 이라고 합니다.

				// 객체지향 프로그래밍의 3가지 특징 
				// => 캡슐화(private, public)
				// => 상속
				// => 다형성(polymorphism)

				// 다형성은 OCP 를 만족하는 아주 좋은 코딩 스타일입니다.
				// => 결국 "가상함수" 가 중요
			}
		}
	}
}

// Shape* s = &Rect; 일때

// s 로는 Rect 가 추가한 멤버에 접근 안됩니다.
// 
// 1. Rect 가 추가한 멤버 데이타 접근 : 멤버 데이타는 private 에 있다.
//									  s 를 사용해서 외부에서 접근할 이유 없다
// 
// 2. Rect 가 추가한 멤버 함수   접근 : Shape 에도 있도록 가상함수로 설계 하고
//									 Rect 가 override 하는 것이 원칙!!
//									즉, 다형성 기반의 설계
// s->draw()
// 
// => Rect의 draw() 안에서 Rect 가 추가한 멤버 접근하는 것은 문제 없음.

