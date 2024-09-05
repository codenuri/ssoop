#include <iostream>

class Animal
{
public:
	int age;
};
class Dog : public Animal
{
public:
	int color;
};

int main()
{
	Animal a;
	Dog    d;

//	Animal* p = &d;
	Animal* p = &a;


	std::cout << p << std::endl;

	// static_cast : 컴파일 시간 캐스팅
	//				 현재 p 가 가리키는 객체는 Dog 가 아닌 Animal
	//				 하지만, 컴파일러는 p가 가리키는 대상체 타입을 알수없다
	//				 따라서, 아래 캐스팅은 항상 성공..
	//				 단, "pd->color = 10" 처럼 사용시 잘못된 메모리참조

	Dog* pd = static_cast<Dog*>(p);
	std::cout << pd << std::endl;

//	pd->color = 10;
}


