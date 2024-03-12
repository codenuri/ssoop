#include <iostream>

class Point
{
	int x, y;
public:
	void set(int a, int b)	// void set( Point* this, int a, int b )
	{						// {
		x = a;				//		this->x = a;	
		y = b;				//		this->y = b;   로 변경됩니다.

		// 멤버 함수 안에서 this를 직접 사용해도 됩니다.
		std::cout << this << std::endl;
	}
};

int main()
{
	Point p1;
	Point p2;

	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;


	p1.set(10, 20); // Point::set(&p1, 10, 20) 의 의미의 코드로 변경됩니다.
	p2.set(10, 20); // Point::set(&p2, 10, 20)
					// 즉, set 을 호출할때 사용한 객체의 주소가 
					// set 멤버 함수에 같이 전달됩니다.
}
