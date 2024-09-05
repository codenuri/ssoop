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

	// 1. Animal 클래스를 조사해서 cry 가 몇번째 
	//    가상함수 인지 조사 => 1번째 가상함수

	// 2. "p->vtptr[1]()" 라는 기계어 코드 생성

	// 3. 실행시간에 위 코드를 실행
	// => 결국 메모리에 있는 가상함수 테이블에서 함수 주소를 꺼내는 작업"
	//    을 수행해서 호출하는 것. 

}

// 가상함수의 오버헤드

// 메모리 관점
// 1. 클래스당 한개의 가상함수 테이블
// => 가상함수가 1000개 이고, 32비트 환경 => 4K 
// => 2단계의 파생 클래스를 만들면 => 12K 

// 2. 객체당 한개의 "vtptr" 추가

// 성능
// 1. 직접 호출이 아니라 "메모리에서 함수 주소를 꺼내서" 호출

// 2. 가상함수는 인라인 치환될수 없다.
// 인라인 치환 : 컴파일 시간에 컴파일러가 수행
// 가상함수    : 실행시간에 함수가 결정됨.



