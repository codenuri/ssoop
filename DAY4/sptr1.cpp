// sptr1.cpp
#include <iostream>

class Car 
{
public:
	void go() { std::cout << "Car go\n"; }
	~Car()    { std::cout << "~Car\n"; }
};

int main()
{
	Car c; // 지역변수는 {}을 벗어나면 자동 파괴 되지만

	Car* p = new Car; // new 로 생성한 객체는 반드시 delete 해야 합니다.
}