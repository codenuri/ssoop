// 156 page ~
// 추상 클래스 : 순수 가상함수가 한개 이상 있는 클래스
// 특징 : 객체를 만들수 없다.
// 의도 : 파생클래스에게 약속된 함수를 만들라고 지시하는 것
class Shape
{
public:
	virtual void draw() = 0; // 순수 가상함수(pure virtual function)
							 // 구현부가 없고, "= 0" 으로 표기
};

class Rect : public Shape
{
	// draw() 의 구현부를 제공하는 않으면 Rect 도 추상 클래스
	// draw() 의 구현부를 제공하면 Rect 는 추상이 아님. 
public:
	void draw() override {}
};

int main()
{
	Shape s; // error. 
	Rect  r; // ok
}


