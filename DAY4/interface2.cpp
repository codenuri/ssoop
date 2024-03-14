#include <iostream>


// 카메라를 먼저 만들지 말고, 
// 카메라와 카메라 사용자 간에 지켜야 하는 규칙을 먼저 설계 합니다.

// 규칙 : "모든 카메라는 아래 클래스로 부터 파생 되어야 한다."

class ICamera 
{
public:
	virtual void take() = 0;
};

// 실제 카메라가 없어도, 카메라를 사용하는 코드를 작성할수 있습니다.
// => 규칙 대로만 사용하면 됩니다.
class Person
{
public:
	void use_camera(ICamera* c) { c->take(); }
};


// 이제 모든 카메라 제품은 규칙대로 설계 되어야 합니다.
class Camera : public ICamera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class UHDCamera : public ICamera
{
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};


int main()
{
	Person p;
	Camera c;

	p.use_camera(&c);	

	HDCamera hc;
	p.use_camera(&hc); // ok

	UHDCamera uhc;
	p.use_camera(&uhc); // ok. Person 을 변경하지 않아도
						// 새로운 카메라를 사용할수 있다.
						// OCP 만족하는 좋은 코드!
}

