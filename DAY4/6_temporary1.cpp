#include <iostream>

// temporary - 127 page ( 함수가 객체를 값으로 반환할때 )

class Point
{
public:
	int x, y;

	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
int main()
{
//	Point pt(1, 2); // named object : 이름이 있는 객체
					// => 이름(pt) 가 있기 때문에 다음 문장에서도 접근가능
					// 수명 : 자신을 선언한 {}을 벗어날때 파괴

//	Point (1, 2);	// unnamed object
					// => 이름이 없으므로 다음문장에서 접근 안됨.
					// 수명 : 자신을 선언한 문장의 끝( ; )


	Point(1, 2), std::cout << "X\n"; 

	std::cout << "-------" << std::endl;
}





