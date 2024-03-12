#include <iostream>



class Car
{
	int color = 0;
public:	

//	int cnt = 0;	// 객체당 한개씩 각각 생성되는 멤버

	static int cnt; // 모든 객체가 공유하는 멤버 데이타
					// 1. 클래스 외부에서 반드시 선언해야 하고
					// 2. 초기화도 외부 선언에서 해야한다.

	Car()  { ++cnt;}
	~Car() { --cnt;}
};
// static 멤버 데이타의 class 외부 선언
// => Car:: 을 제외 하면 결국 전역변수 선언 입니다.
// => static 멤버 데이타는 결국 "Car 전용" 전역변수를 만드는 것 입니다.
int Car::cnt = 0;

int main()
{
	// 특징 1. static 멤버 데이타는 객체를 생성하지 않아도 메모리에 존재합니다.
	//	       Car::cnt 로 접근 가능(단, public 인 경우만)
	std::cout << Car::cnt << std::endl;

	Car c1;
	Car c2;

//	std::cout << cnt << std::endl;	// 2
	
}
