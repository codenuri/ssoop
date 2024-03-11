#include <iostream>

// static_cast : 논리적으로 맞고 위험하지 않은 경우만 허용
//          void*=> 다른 타입*,
//			상속관계의 캐스팅 등.
//          반드시 연관성이 있어야 한다


int main()
{
	int n = 3;

	double* p1 = &n; // error.
	double* p2 = (double*)&n; // ok. C 캐스팅은 대부분 성공. 

	// C++ 은 용도에 맞게 사용하기위해 "4개"의 캐스팅을 제공합니다.
	// static_cast : 위험하지 않은 반드시 필요한 것만 허용. 주로 상속문법에서 사용
	double* p3 = static_cast< double* >( &n ); // error
//	double* p3 = reinterpret_cast< double* >( &n ); // ok. 


	double d = 3.4;
	int n = d; // 에러아님. 하지만 경고가 나올수 있음.
	int n1 = static_cast<int>(d); // ?
}

