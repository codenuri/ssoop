#include <iostream>

// 강한 결합(tightly coupling)
// => 하나의 클래스가 다른 "클래스 이름" 을 직접 사용하는 것
// => 교체 불가능한, 확장성 없는, 경직된 디자인

// 약한 결합(loosely coupling)
// => 하나의 클래스가 다른 "클래스 이름" 을 직접 사용하는 것이 아니라
//    규칙을 담은 "인터페이스 이름"을 통해서 사용하는 것

// => 교체 가능한, 확장성 있는, 유연한 디자인


// 추상 클래스 vs 인터페이스
// => C++ 은 "추상클래스 문법" 만 있는데, 추상 클래스 안에.. 
// 인터 페이스 : 지켜야 되는 규칙(순수 가상함수)만 가진 경우
// 추상 클래스 : 지켜야 되는 규칙(순수 가상함수)만 가진 경우 + 다른 멤버

// java, C# : interface, abstract 라는 키워드 존재
// C++      : 별도의 키워드 없이 "추상 클래스" 문법으로 모두 만들게 됩니다.

// 참고 :C#, java
/*
interface ICamera 
{
	void take();
};
*/



// 카메라를 먼저 만들지 말고, 
// 카메라와 카메라 사용자 간에 지켜야 하는 규칙을 먼저 설계 합니다.

// 규칙 : "모든 카메라는 아래 클래스로 부터 파생 되어야 한다."  라고 표현하지 말고
//        "모든 카메라는 아래 인터페이스를 구현해야 한다." 라고 표현합니다

//class ICamera // 이 코드도 되지만
struct ICamera  // 이렇게 하면 public 생략 가능하므로, 이렇게 많이 합니다.
{
	virtual void take() = 0;
	virtual ~ICamera() {}     // 인터페이스도 결국 기반 클래스 이므로
							  // 소멸자는 가상함수 이어야 합니다.
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

