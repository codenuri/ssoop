// 1_레퍼런스2
#include <iostream>

// reference 와 함수 인자

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	inc1(a); // call by value. a 증가 안됨.
	inc2(&b);// call by pointer. b가 증가!!
	inc2(0); // 이렇게 전달도 가능
			 // 그래서 inc2 에서는 if ( p != nullptr) 이 필요

	inc3(c); // call by reference. c가 증가
	inc3(0); // error. 그래서 inc3 에서는 if ( ) 없어도 안전.
//	int* p = nullptr; 
//	inc3(*p); // 이런 경우는 runtime error

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;


//	int& & r1 = n; // error. reference 의 reference
//	int&& r1 = 0; // ok. rvalue reference 
}
