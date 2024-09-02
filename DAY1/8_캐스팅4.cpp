// const_cast : 

int main()
{
	const int c = 10;

	// 상수변수 주소를 비상수를 가리키는 포인터에 담기
	int* p1 = &c;       // C 언어 : ok.  C++ : error

	int* p2 = (int*)&c; // ok. C style 캐스팅은 거의 만능!!!

	int* p3 = static_cast<int*>(&c); // error
	int* p4 = reinterpret_cast<int*>(&c); // error

	int* p5 = const_cast<int*>(&c); // ok. 동일 타입 객체의 상수성제거
}

// static_cast, reinterpret_cast, const_cast 를 용도에 맞게 사용하세요

// dynamic_cast 는 "상속"을 배운뒤에 다시 설명