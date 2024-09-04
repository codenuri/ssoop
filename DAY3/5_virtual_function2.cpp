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
//	virtual void draw()  {} // 이렇게 해도 되고
//	void draw() {}			// 이렇게 해도 됩니다.


	// #2. 가상함수를 override 할때 실수(오타)가 있어도
	// => 에러 아닙니다.
	// => 새로운 가상함수를 "추가" 한것으로 생각하게 됩니다.
	// => 이런 특징이, 과거 많은 "버그"의 원인이 되었습니다.
//	virtual void Draw() {}
//	virtual void move(int n) {}

	// #3. C++11 부터 "#2"의 해결을 위해 "override" 키워드 나옵니다.
	// => 새로 추가하는 함수가 아니라
	// => "기반 클래스 함수를 override" 한다고 알려주는 것!
	virtual void Draw()      override {} // error
	virtual void move(int n) override {} // error

};

int main()
{
	
}