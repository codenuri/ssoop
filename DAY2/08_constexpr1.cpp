// 64 page ~

// const : immutable 변수(read only) 를 만드는 것
//		   컴파일 시간에 값을 알수 있을수도 있고, 모를 수도 있다.

// constexpr : constant expression 을 보장하는 상수..
//			   반드시 컴파일 할때 값을 알아야 한다.
// C++11

int main()
{
	int n = 0;

	const int c1 = n; // ok
	const int c2 = 3; // ok

//	constexpr int c3 = n; // error
	constexpr int c4 = 3; // ok

	int k1 = c1;  // 메모리에서 c1 을 읽어 온다.
	int k2 = c4;  // 컴파일 할때 3 으로 치환(#define 과 유사)
}