#include <iostream>

// static member data 특징 정리

class Car
{
	int color = 0;
public:
	static int cnt;	

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// #1. static 멤버 데이타는 class 안에 선언하고, 
//     class 외부에도 정의 필요. 초기화도 외부에서

int Car::cnt = 0;

// #2. Car 객체를 한개도 생성하지 않아도 static 멤버 데이타는 이미 메모리에 존재
// => 위 코드가 메모리에 cnt 변수를 할당하는 코드( 전역변수와 유사)
// => static storage(전역변수 놓이는 공간)에 할당


int main()
{
	// #3. 객체가 없어도 "클래스이름::static멤버이름" 으로 접근 가능
	// 단, public 에 있는 경우만
	std::cout << Car::cnt << std::endl; // 0



	// #4. 객체를 생성하면 static 이 아닌 멤버 데이타만 stack 에 놓이게 됩니다.
	// => sizeof(Car) 또는 sizeof(c1) 은 "4(color)" 입니다.
	Car c1;
	Car c2;


	// #5. C++ 에서는 static 멤버 데이타는 2가지 방법으로 접근 가능
	// => 클래스이름::멤버이름
	// => 객체이름.멤버이름

	std::cout << Car::cnt << std::endl;
	std::cout << c1.cnt << std::endl;
	std::cout << c2.cnt << std::endl;

	//	=> 위 3줄은 모두 같은 메모리 접근하는 코드

	// 클래스 이름을 사용하는 것을 권장
	// => 객체이름 사용시, 객체자체의 특성으로 오해 할수 있다.

	// Java, C#, swift, python, Rust 등의 대부분의 언어
	// => "클래스 이름으로만" 접근 가능
}

