#include <iostream>

// reinterpret_cast 
// => 1. 서로 다른 타입에 대한 주소 캐스팅
// => 2. 정수 <=> 주소 사이의 변환
int main()
{
	int n =  0; 

	double* p1 = static_cast<double*>( &n ); // error
	double* p2 = reinterpret_cast<double*>(&n); // ok

//	*p2 = 3.4; // 위처럼 캐스팅 되지만 이렇게 사용하면 안됩니다.

	int* p3 = 1000; // error
	int* p3 = (int*)1000; // ok. 
	int* p3 = static_cast<int*>(1000); // error 
	int* p3 = reinterpret_cast<int*>(1000); // ok
	int n = reinterpret_cast<int>(n3); // ok.  주소 => 정수

	// 핵심. reintepret_cast 의 용도에 맞지 않으면 error

	int n4 = 3.4; // ok. 경고 발생할수 있음.
	int n4 = static_cast<int>(3.4); // ok. 경고 없음.
	int n4 = reinterpret_cast<int>(3.4); // error. 용도에 맞지않음.

}

