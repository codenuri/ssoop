#include <iostream>

// 159page ~

class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class Person
{
public:
	void use_camera(Camera* c)   { c->take(); }
	void use_camera(HDCamera* c) { c->take(); }
};

int main()
{
	Person p;

	Camera c;
	p.use_camera(&c);	

	HDCamera hc;
	p.use_camera(&hc); // ???
}


// OCP
// 기능 확장에는 열려 있고(Open, 미래에 클래스/모듈이 추가되어도)
// 코드 수정에는 닫혀 있어야(Close, 기존 코드는 수정되지 않도록)
// 설계해야 한다는 이론(Principle)

// Open Close Principle( 개방폐쇄의 법칙 )

// 위 코드는 OCP 를 만족하지 못하는 코드