#include <iostream>

// 컴파일러가 vtable1.cpp 코드를 아래와 유사한 형태로 변경하게 됩니다.

void* Animal_vtable[] = { Animal의 타입정보,
						  &Animal::cry,
						  &Animal::run };

class Animal
{
	void* vtptr = Animal_vtable; // 컴파일러가 추가한 멤버
								 // "tvptr" 이라는 이름은 컴파일러마다다름
	int age;
public:
	virtual void cry() {}
	virtual void run() {}
};


//--------------------
void* Dog_vtable[] = { Dog의 타입정보,
						  &Dog::cry,
						  &Animal::run };

class Dog : public Animal
{
	void* vtptr = Dog_vtable;

	int color;
public:
	virtual void cry() override {}
};

int main()
{
	Animal a1, a2;
	Dog    d;

	Animal* p = &d;
	p->cry();	
}


