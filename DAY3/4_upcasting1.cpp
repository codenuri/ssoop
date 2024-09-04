#include <vector>

// 140 page ~

class Animal
{
public:	
	int age;
};
class Dog : public Animal
{
public:	
	int color;
};
int main()
{
	Animal  a;
	Dog     dog;

	Dog*    p1 = &dog;	// ok 
//	int*    p2 = &dog;	// error.
	
	// 핵심 #1. 기반 클래스 포인터에 파생 클래스 객체의 주소를 담을수 있습니다.
	// => 이유는 "메모리 그림(140p)" 를 생각하세요
	// => "upcasting" 이라고 합니다.
	Animal* p3 = &dog;	// ok.

	// 핵심 #2. 컴파일러는 컴파일 시간에는 p3 가 가리키는 곳에 있는 객체의
	//          타입을 알수 없습니다.
	// => 아래 같은 코드가 있다면 실행하다 대상체가 변경될수 있습니다.
	// => 따라서 "컴파일 시점"에는 알수 없습니다.
// 	if (사용자 입력 == 1) p3 = &a;


	// 핵심 #3. 

	p3->age = 10;
	p3->color = 20;


}




