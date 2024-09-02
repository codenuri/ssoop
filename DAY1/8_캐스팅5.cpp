int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
//	double* p = (double*)&c; // ok..

	// C++ 스타일 캐스팅으로 위 코드 만들어보세요

//	double* p = reinterpret_cast<double*>(&c); // error. c는 const
//	double* p = const_cast<double*>(&c); // error.	
										 // 동일 타입 const 만제거가능

	double* p1 = reinterpret_cast<double*>( const_cast<int*>(&c) );
				// ok. 2번의 캐스팅 필요
				// const int* => int*
				// int* => double*

	double* p2 = const_cast<double*>(reinterpret_cast<const double*>(&c));
				// const int* => const double* 
				// const double* => double* 

}





