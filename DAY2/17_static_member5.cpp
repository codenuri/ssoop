#include <iostream>

// 정리
// static member data 
// => 객체가 없어도 메모리에 존재
// => 모든 Car 객체가 공유(한개만 있으므로)

// static member function
// => 객체가 없어도 호출가능한 멤버 함수
// => static 이 아닌 멤버 함수는 반드시 객체를 생성해야 호출가능하다.
// => c.set_color(10) 같은 방식으로!

class Car
{
	int color = 0;	// object member data 또는 instance member data 라고 하고
	static int cnt; // class member data	 
public:	
	Car()  { ++cnt;}
	~Car() { --cnt;}

	static int get_count() { return cnt; } 
};
int Car::cnt = 0;	




int main()
{
	std::cout << Car::get_count() << std::endl;

	Car c1;
	Car c2;

	std::cout << Car::get_count() << std::endl;	

						
	
}
