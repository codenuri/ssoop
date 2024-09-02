#include <iostream>

// C++은 C 캐스팅 대신 사용하기 위해서 4개의 캐스팅 연산자 제공

// => static_cast
// => reinterpret_cast
// => const_cast
// => dynamic_cast


// static_cast : 논리적으로 맞고 위험하지 않은 경우만 허용
//          1. void*=> 다른 타입*,
//			2. 상속관계의 캐스팅 등.
//          3. 반드시 연관성이 있어야 한다


int main()
{
	double d = 3.4;
	int    n = d;

	// malloc : void* 반환
	// void* => int* 
	int* p1 = malloc(100);     // C언어 : ok. C++ : 에러

	int* p2 = (int*)malloc(100); // ok. C style 캐스팅

	int* p3 = static_cast<int*>( malloc(100) ); // ok


	// #2. int* => double*
	double* p4 = static_cast<double*>( &n ); // error
	double* p5 = (double*)&n; // ok. 


}

