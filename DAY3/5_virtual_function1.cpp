#include <iostream>

class Animal
{
public:
	void cry1() { std::cout << "Animal cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// function override : 기반 클래스 멤버 함수를 파생 클래스에서 다시 구현하는 것
	// 
	// overloading 과 잘 구별 하세요 : square(int), square(double)

	void cry1() { std::cout << "Dog cry1" << std::endl; }  // 2
};

int main()
{
	Animal a; 
	Dog    d; 

	a.cry1();	// "Animal cry1"
	d.cry1();   // "Dog cry1"

	Animal* p = &d;

	p->cry1(); // ???


	// C++ / C# / Rust : Animal cry1

	// java, python, swift, kotlin 등 대부분의 객체지향언어 : Dog cry1
}

// 아래 내용은 151p 있습니다.

// "p->cry1()" 을 어느 함수와 연결할것인가 ?
// => "function binding" 이라고 합니다.

// static binding : 컴파일 시간에 컴파일러가 함수 호출을 결정
//					컴파일러는 "p가 가리키는 곳의 객체의 타입"은 알수없다
//					p 자체의 타입이 "Animal*" 라는 것만 알고 있다.
//					"Animal cry1" 호출!
// 논리적이지 않지만 빠르다.  early binding 이라고도 합니다.

// C++/C# 언어 기본 바인딩

// dynamic binding : 컴파일 시간에는 p 가 가리키는 메모리를 조사하는
//					 기계어 코드 생성
//					 실행시, p의 메모리를 조사해서 실제 객체에 타입에따라
//					 함수 호출 결정
//					 "p가 가리키는 곳에 Dog 객체가 있다면"
//					 "Dog cry1" 호출
// 논리적이지만 느리다.   late binding 이라고도 합니다
// java, swift, python, kotlin 등 대부분의 객체지향 프로그래밍 언어. 
// C++/C# 언어의 virtual function(가상함수)


