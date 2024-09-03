// this1 복사

#include <iostream>

// this : 객체지향 언어의 원리!!!! - 97p

// => 반드시 이해해 두세요

// 1. 멤버 함수는 컴파일 되면, 인자로 객체 주소를 받게 됩니다.
// => "this call" 이라고 합니다.

class Point
{
	int x, y;
public:
	// C++98 ~ : 객체의 주소가 컴파일러에의해 암시적으로 추가됩니다.
	// 파이썬 : 개발자가 객체의 참조를 직접 받아야 합니다.
	//         def set(self, a, b)
	void set(int a, int b)	// void set(Point* this, int a, int b)
	{
		x = a;				// this->x = a;
		y = b;				// this->y = b;		
	}
	// C++23 부터 멤버 함수에서 객체 참조(주소)를 명시적으로 받는 기법이
	// 생겼습니다. 
	// "explicit object parameter" 라는 문법. 
	// 아래 코드는 위와 완전히 같은 의미
	// => 왜?? 이런 문법이 생기나요 ? => 아주 복잡하고 어려운 이유!!
	void set2(this Point& self, int a, int b)
	{
		self.x = a;				
		self.y = b;		

		std::cout << &self << std::endl;
	}

};

int main()
{
	Point p1;
	Point p2;

	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;

	p1.set(10, 20); 

	p2.set(10, 20); 
}
