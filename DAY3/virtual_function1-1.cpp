#include <iostream>

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }  // 2
};

int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;	

//	if ( 사용자가 입력한 값 == 1 ) p = &a;

	// 아래 코드를 컴파일 할때 컴파일러는 p가 어느 객체를 가리키는지
	// 알수 있을까요 ?
	p->Cry1();	
}



// "p->Cry1()" 의 코드를 실제 어느함수와 연결할것인가 ? "함수 바인딩(binding)" -147

// 1. static binding : 컴파일러가 컴파일 시간에 함수 호출을 결정하는 것
//			컴파일 시간에는 p가 가리키는 대상체가 어떤 객체인지 알수없다(위주석참고)
//			컴파일러가 아는 것은 p 자체의 타입이 Animal* 라는 것
//          따라서, 컴파일러가 결정하면 "Animal Cry1"


// 2. dynamic binding : 컴파일 시간에는 p가 가리키는 곳을 조사하는 기계어 코드생성
//						실행시간에 메모리 조사후 실제 객체의 따라 함수 호출
//						p가 가리키는 곳에 Dog 가 있었다면 "Dog Cry1" 호출
