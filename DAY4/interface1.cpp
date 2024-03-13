#include <iostream>


// 아래 코드는 OCP를 위반한 안좋은 코드 입니다.
// => 새로운 카메라가 등장하면 Person 의 코드는 계속 수정되어야 합니다.

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
	p.use_camera(&hc); // ??
}

