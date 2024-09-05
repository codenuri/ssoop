#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
/*
void f1(Point  pt) {} // call by value     : 복사본 생성
void f2(Point& pt) {} // call by reference : 복사본 생성안됨.

int main()
{
	Point p(0, 0);
	f1(p);
	f2(p);
}
*/






Point pt(1, 2);

Point foo()	// return by value
{
	return pt;	// pt 자체가 반환되는 것이 아닙니다.
				// pt 의 복사본(이름없는 임시객체)
				// 가 생성되어서 반환 됩니다.
}

Point& goo()	// return by reference 
{				// 복사본이 아닌 pt 자체를 반환해 달라는 것
	return pt; 
}
int main()
{
	foo().x = 10; // "리턴용 임시객체.x = 10"
				  // 임시객체는 =의 왼쪽에 올수 없습니다. error

	goo().x = 10; // ok. "pt의별명.x = 10" 
}

// 주의!!. 지역변수는 절대 참조 리턴하지 마세요
// => 값반환만 가능합니다.
// => 함수 호출이 끝나도 파괴되지않은 것만 참조 반환가능.
Point& hoo()
{
	Point p(1, 2);
	return p;  // 버그
}




