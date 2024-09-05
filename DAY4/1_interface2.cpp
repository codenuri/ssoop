#include <iostream>

// 카메라 제작자와 사용자 사이에 지켜야하는 규칙(인터페이스)
// 를 먼저 설계 합니다.

// 규칙 : 모든 카메라는 아래 클래스로 부터 파생되어야 한다.
class ICamera
{
	virtual void take() = 0;
};















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
	void use_camera(Camera* c) { c->take(); }
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


