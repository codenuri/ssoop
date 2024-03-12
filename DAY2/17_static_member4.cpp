#include <iostream>

class Car
{
	int color = 0;
	static int cnt; 	
public:	
	Car()  { ++cnt;}
	~Car() { --cnt;}

//	int get_count() { return cnt; } // 일반 멤버 함수 : 객체가 있어야 호출가능

	static int get_count() { return cnt; } 
				// static 멤버 함수 : 객체가 없어도 호출가능
				// "Car::get_count()" 로 호출가능. 
};
int Car::cnt = 0;	// private 이라도 외부 선언시 초기화는 허용됩니다.

int main()
{
	std::cout << Car::get_count() << std::endl; // 0

	Car c1;
	Car c2;

	std::cout << Car::get_count() << std::endl;	
//	std::cout << c1.get_count() << std::endl;	 // 객체이름으로도 호출 가능
												// 권장 안함.
						
	
}
