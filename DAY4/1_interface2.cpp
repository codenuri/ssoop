#include <iostream>

// 인터 페이스 : 지켜야 하는 규칙(순수가상함수)만 가진 경우
// 추상 클래스 : 지켜야 하는 규칙(순수가상함수) + 다른 멤버도 있는 경우

// C#, Java 는 "interface", "abstract" 라는 키워드가 별도로 존재 합니다.
// C++ 은 위와 같은 키워드 없습니다.
// 단지, 추상클래스 안에 순수가상함수만 있는지, 다른 멤버도 있는지에 따라
// 분류!!
// 그런데, 용어가 혼용되는 경우도 있습니다.

//=============================================

// 카메라 제작자와 사용자 사이에 지켜야하는 규칙(인터페이스)
// 를 먼저 설계 합니다.

// 규칙 : "모든 카메라는 아래 클래스로 부터 파생되어야 한다." 라고 표현하지 말고
//       "모든 카메라는 아래 인터페이스를 구현해야 한다." 라고 표현합니다.

#define interface struct 

//class ICamera
//interface ICamera
struct ICamera
{
//public:	
	virtual void take() = 0;

	virtual ~ICamera() {}   // 인터페이스도 문법적으로는 
							// 결국 "기반 클래스" 입니다.
							// 소멸자를 "virtual" 로 해야 합니다.
};






// 카메라 사용자는 "구체적인 제품"을 사용하지 말고(의존하지 말고)
// 규칙대로 사용하면 됩니다.
class Person
{
public:
	void use_camera(ICamera* c) { c->take(); }
};

// 모든 카메라 제품은 규칙을 지켜야 합니다.
class Camera : public ICamera
{
public:
	void take() override { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() override { std::cout << "take HD picture" << std::endl; }
};

class UHDCamera : public ICamera
{
public:
	void take() override { std::cout << "take UHD picture" << std::endl; }
};

int main()
{
	Person p;

	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); 

	UHDCamera uhc;
	p.use_camera(&uhc); // Person 코드의 수정없이
						// 나중에 추가된 카메라를 사용할수 있다.
						// OCP 만족!!!
}

// 강한 결합(tightly coupling)
// => 하나의 클래스가 다른 클래스 사용시 클래스 이름을 직접 사용하는것
// => use_camera(HDCamera*)
// => 교체 불가능한 경직된 디자인


// 약한 결합(loosely coupling)
// => 하나의 클래스가 다른 클래스 사용시 규칙을 담은 인터페이스를 통해서
//    사용하는것
// => use_camera( ICamera*)
// => 교체 가능한 유연한 디자인
