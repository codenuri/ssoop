#include <iostream>

// 방법 3. 



class Car
{
	int color = 0;
public:
//	int cnt = 0;		// 객체당 한개의 멤버
	static int cnt; 	// static 멤버 데이타. 모든 객체가 공유

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static 멤버 데이타는 클래스 외부에서 반드시 정의 되어야 합니다.
int Car::cnt = 0;


int main()
{
	Car c1;
	Car c2;
	
	std::cout << c1.cnt << std::endl; 

}
