#include <iostream>
#include <memory> // C++ 표준의 스마트 포인터. C++11 부터 지원

class Car 
{
public:
	void go() { std::cout << "Car go\n"; }
	~Car()    { std::cout << "~Car\n"; }
};

int main()
{
//	std::shared_ptr<Car> sp = new Car; // error. 
	std::shared_ptr<Car> sp{new Car}; // () 또는 {} 로만 초기화 가능

	sp->go();

	std::cout << "----------\n";
						
}