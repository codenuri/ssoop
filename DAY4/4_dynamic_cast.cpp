#include <iostream>

class Animal
{
public:
	int age;

	virtual ~Animal() {}
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
	//			     그래서, static_cast 는 확신이 있을때만 사용.
	//				"성능저하는 없습니다."
//	Dog* pd = static_cast<Dog*>(p);
//	std::cout << pd << std::endl;


	// dynamic_cast : 실행시간 캐스팅
	//				  조사해야 하므로 오버헤드 있습니다.
	//				  p 가 가리키는 객체가 Dog 가 아니면 "0" 반환
	//				  "가상함수가 있는 타입만 사용가능"
	//				  가상함수 테이블에 "타입정보"를 보관하고 있기 때문에. 

	Dog* pd = dynamic_cast<Dog*>(p);
	std::cout << pd << std::endl;

	
	//	pd->color = 10;
}


