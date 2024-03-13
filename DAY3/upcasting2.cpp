// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	int age;
};
class Dog : public Animal
{
public:	int color;
};
class Cat : public Animal
{
public:	int speed;
};

// 새해가 되면 한살이 증가한다.
//void new_year(Dog* p)	   // Dog 객체만 받을수 있는 함수
void new_year(Animal* p)   // 모든 동물 객체를 받을수 있는 함수
{
	// 이 안에서는 동물의 종류에 상관없이 
	// 모든 동물의 공통의 특징(Animal 에서 물려받은 특징) 만 사용해야 합니다.
	++(p->age);
}

int main()
{
	std::vector<Dog*> v1; 	// Dog 객체만 보관 가능
	std::vector<Animal*> v2;// 모든 동물 객체를 보관 가능

	// Upcasting 활용/장점
	// 1. 동종(동일 기반 클래스로 부터 파생된 타입) 을 처리하는 함수 만들수 있다
	// 2. 동종을 보관하는 컨테이너를 만들수 있다.
	// => 컨테이너 : 여러개를 보관하는 도구(배열, vector 등)
}