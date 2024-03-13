#include <vector>

// 135 page ~

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
	Dog     dog;

	Dog*    p1 = &dog;	// ok
//	int*    p2 = &dog;	// error.
	
	// 핵심 1. upcasting 개념
	// => 파생 클래스 타입의 객체 주소를 기반 클래스 포인터에 담을수 있습니다.
	//    "상속에서 가장 중요한 문법"
	// => 메모리 그림을 생각해 보세요.

	Animal* p3 = &dog;	// ok


	// 핵심 2. Animal* 타입인 p3 를 사용해서는 Animal 로 부터 파생된 멤버만
	// 접근 가능하다.
	// 이유 : C++ 은 static type check을 사용하므로
	//       => 컴파일 시간에 type 을 확인한다는 의미
	//		 => p3가 Animal* 이므로 컴파일 시간에 Animal 멤버만 사용할수 있게.
	
	p3->age = 10;	// ok
//	p3->color = 10;	// error
				// python 은 이 부분이 컴파일 에러가 아님.
				// 단, 실행시간에 color 가 있으면 ok
				//              없으면 예외 발생

	// 핵심 3. Animal* 인 p3 를 가지고 Dog 고유의 멤버에 접근하려면 
	//        p3를 Dog* 타입으로 캐스팅하면 됩니다.

	static_cast<Dog*>(p3)->color = 10;

	// 단, 이경우 p3가 가리키는 곳이 Dog 라는 확신이 있을때만 사용해야 합니다.
	// => Dog 가 아닌 경우 color 가 없으므로 잘못된 메모리 참조!!!
	// => 비정상 종료될수있습니다.(또는 잘못된 결과)
	// => 조사하는 기법도 있습니다.(내일)
}




