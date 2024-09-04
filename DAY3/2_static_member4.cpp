#include <iostream>


class Car
{
	int color = 0;
	static int cnt; 
public:
	Car() { ++cnt; }
	~Car() { --cnt; }


//	int get_count() const { return cnt; }	// 객체가 있어야만 호출가능
											// "c1.get_count()"

	static int get_count() { return cnt; }
							// => static member 함수
							// => 객체 없이 호출 가능
							// => Car::get_count() 로 호출
							// => 객체와 상관없이 호출가능하므로
							//    "const member function" 으로 만들수는없다

};
int Car::cnt = 0; 

int main()
{
	std::cout << Car::get_count() << std::endl;

	Car c1;
	Car c2;

	std::cout << Car::get_count() << std::endl;

}

