#include <iostream>

// 클래스가 가상함수가 있는 경우 "vtable1.cpp" 코드를
// 컴파일러가 아래 코드 처럼 변경합니다.
//----------------------------------------------
// #1. Animal 의 모든 가상함수의 주소를 담는 배열(전역변수)을 생성합니다.
// void* : 모든 타입의 주소를 담을수 있는 포인터
void* animal_vtable[] = { Animal의 타입정보를 담은 RTTI 객체,
						  &Animal::cry,
						  &Animal::run};

class Animal
{
	void* vtable = animal_vtable;  // <== 컴파일러가 추가한 멤버
	int age;
public: 
	virtual void cry() {}
	virtual void run() {}
};


//--------------------
void* dog_vtable[] = { Dog의 타입정보를 담은 RTTI 객체,
					   &Dog::cry,		//
					   &Animal::run};	// override 하지 않으면 기반 클래스 함수주소

class Dog : public Animal
{
	void* vtable = dog_vtable;
	int color;
public:	
	virtual void cry() override {}
};
//------------------------------------------------------------


int main()
{
	Animal a1, a2;
	Dog    d;

	Animal* p = &d;
	p->cry();	// 이 한줄을 컴파일러는 아래 주석 처럼 컴파일

	// 컴파일 시간에는 p가 가리키는 곳은 조사할수 없고
	// p 가 Animal* 라는 것만 알수 있습니다.

	// 1. cry()가 virtual 인지 아닌지 조사
	// => Animal 클래스를 보고 조사. 

	// 2. virtual 이 아니면 static binding 이므로
	// => call Animal::cry() 로 결정 완료

	// 3.  virtual 인 경우, 
	// => 몇번째 선언된 가상함수인지 조사(순서가 중요!!!)
	// => 그리고 아래 의미의 코드를 생성
	// p->vtable[1](); // 1은 선언된 순서
}

// 가상함수의 오버헤드
// 1. 클래스당 한개의 가상함수 테이블(배열)
// => 가상함수 1000개 라면 64bit 에서 8K
// => 3계층 상속되면 24K

// 2. 객체당 포인터 멤버 한개씩 추가.

// 3. 함수 호출시 메모리에서 주소를 꺼내서 호출하므로 
//    약간의 성능 저하

// 4. 가상함수는 인라인 치환 될수 없다.
// => 인라인 치환은 컴파일러가 컴파일 시간에 하는것
//-----------------------------------
// 가상함수를 사용하지 않으면
// => 위와 같은 오버헤드는 없다.

// =>"zero cost overhead" 라는 개념

// godbolt.org 에다가
// vtable1.cpp 소스 넣으세요
