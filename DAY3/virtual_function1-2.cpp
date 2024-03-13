#include <iostream>

class Animal
{
public:
	// non-virtual : static binding 하라는 의미
	//				 컴파일 시간에 결정. 포인터타입으로 호출.
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } 


	// virtual function : dynamic binding 해달라는 의미
	//					실행시간에 메모리에 있는 객체를 조사후 호출
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; } 
};
class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }  

	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }  
};
int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;	

	p->Cry1();	// Animal Cry1,   포인터 타입으로 결정
	p->Cry2();	// Dog Cry2       p가 가리키는 메모리 조사후 결정
}
