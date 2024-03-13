class Shape
{
public:
	virtual void draw() {};
	virtual void move() {};
};
class Rect : public Shape
{
public:
	// #1. 가상함수를 override 할때는 virtual 은 있어도 되고 없어도 됩니다.
	// => virtual 을 붙이지 않아도 기반 클래스에서 virtual 로 선언되었기때문에 virtual 입니다.
	// virtual void draw()  {};


	// #2. 가상함수 override 시에 실수(오타)가 있는 경우
	// => 에러가 아니라
	// => "새로운 가상함수를 추가" 한것으로 컴파일러가 생각하게 됩니다.
	// => C++11 이전에 이 문제 때문에 버그가 아주 많았습니다.
//	virtual void Draw() {};
//	virtual void move(int n) {};

	// #3. 위 문제를 해결하기 위해 C++11 에서 override 키워드가 추가되었습니다.
	// => 새로운 가상함수가 아니라 기반 클래스 함수를 override 한다고 알려주는것
//	virtual void Draw() override {} // "Draw" 가 기반 클래스에 없으므로 error
	virtual void draw() override {} // ok
};

int main()
{
	
}