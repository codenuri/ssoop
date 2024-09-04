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

int main()
{
	// Upcasting 활용/장점
	std::vector<Dog*>    v1; // Dog 객체만 보관하겠다는 의도
	std::vector<Animal*> v2; // Animal 뿐 아니라, 모든 파생클래스객체도
							// 보관 가능
							// 동종("동일 기반 클래스사용하는 타입")을
							// 보관하는 컨테이너(배열같이 저장하는 타입)

}

// 활용/장점 #2
// => 동종을 처리하는 함수 만들기.. 
//void new_year(Dog* p)  // Dog 만 인자로 받을수 있는 함수
void new_year(Animal* p) // 모든 동물을 인자로 받을수 있는 함수
{
	++(p->age);
}