#include <iostream>

// reinterpret_cast 의 용도는 정해져 있습니다.
// 1. 서로 다른 타입의 주소 캐스팅
// 2. 정수 <=> 주소 사이 변환
int main()
{
	int    n =  0;

	double* p1 = (double*)&n;	// ok
//	double* p2 = static_cast<double*>(&n); // error
	double* p2 = reinterpret_cast<double*>(&n); // ok

	// 포인터 변수에 주소를 직접 넣기
	int* p3 = 100; // error
	int* p4 = (int*)100; // ok. 
//	int* p5 = static_cast<int*>(100); // error
	int* p5 = reinterpret_cast<int*>(100); // ok.

	int n3 = reinterpret_cast<int>(3.4); // error
	
}

