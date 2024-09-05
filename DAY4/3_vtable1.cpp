#include <iostream>

// 가상함수 원리   153page ~

class Animal
{
	int age;
public: 
	virtual void cry() {}
	virtual void run() {}
};
//--------------------
class Dog : public Animal
{
	int color;
public:	
	virtual void cry() override {}
};

int main()
{
	Animal a;
	Dog    d;

	Animal* p = &d;
	p->cry();	// Dog cry
				// 원리를 생각해 봅시다.
				// 1. p 가 가리키는 곳이 어떤 타입인지 어떻게 알수 있을까 ?
				// 2. 객체가 Dog 라는 것을 알아도 Dog::cry 를 어떻게 호출할수 있을까 ?
				//    호출하려면 주소가 필요 하다!!
				//    컴파일/링크시는 주소를 알수 있지만!! 실행시에는 ???
				//    => 원리는 다음 코드 참고.
}


