#include <iostream>

// 61 page

// inc2 와 inc3 은 결국 동일한 기계어 코드
// => 성능과 하는 일이 완전히 동일
// => 하지만 inc3 이 사용하기 쉽고, 안전합니다.
// => null pointer 조사할 필요 없습니다.

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); } // if ( p != nullptr ) ++(*p)
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	// a, b, c 를 각각 1증가하고 싶다.
	inc1( a ); // call by value, a 증가안됨. 실패
	inc2( &b );// call by pointer, b 증가, 성공. 
	inc3( c);  // call by reference, c증가, 성공.


	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}
