	// const_cast : 

int main()
{
	const int c = 10;
//	c = 20; // error. 상수 이므로

//	int* p1 = &c;       // error. 상수의 주소를 상수가 아닌것을 가리키는 포인터에
						//        담을수 없다.
	int* p2 = (int*)&c; // 아주 위험하고, 절대 사용하면 안되는 캐스팅인데..
						// C 캐스팅은 허용

	*p2 = 20;

//	int* p3 = static_cast<int*>(&c); // error
//	int* p3 = reinterpret_cast<int*>(&c); // error
	int* p3 = const_cast<int*>(&c); // ok.
}

// C++은 4개의 캐스팅이 있습니다.
// => 용도에 맞게 사용해야 하는데
// => 대부분의 정상적인 프로그램은 static_cast 만 사용해도 모두 만들수 있습니다
// static_cast :      반드시 필요한, 위험하지 않은 변환
// reinterpret_cast : 서로 다른 타입의 주소 변환
// const_cast :   상수성 제거
// dynamic_cast : RTTI 기능(수요일)