// 152 page ~

// 추상 클래스(abstract class) : 순수 가상함수가 한개 이상 있는 클래스
// 특징 : 객체를 생성할수 없다.
// 의도 : 약속된 함수를 반드시 만들어야 한다고 지시하기 위해 사용.
//        "규칙" 을 만드는 것!
class Shape
{
public:
	virtual void draw()  = 0;	// 순수 가상함수(pure virtual function)
								// => 함수 구현이 없고
								// => "= 0" 으로 표기	
};

class Rect : public Shape
{
	// Shape 로 부터 순수 가상함수를 물려 받게되므로!!
	// draw() 의 구현부를 제공하지 않으면 Rect 도 추상 클래스
	// draw() 의 구현부를 제공하면       Rect 는 추상 클래스 가 아님.
public:
	void draw() override  {}
};

int main()
{
	Shape s; // error.
	Rect  r; // ok

	Shape* p; // ok. 추상 클래스라도 포인터 변수는 만들수 있다.
}


