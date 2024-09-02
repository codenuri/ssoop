// 1_constexpr3.cpp
// godbolt.org 에 아래 코드 넣으세요
int fact1(int n)
{
	if (n == 1) return 1;
	return n * fact1(n - 1);
}

constexpr int fact2(int n)
{
	if (n == 1) return 1;
	return n * fact2(n - 1);
}

int main()
{
	int n1 = fact1(5); 
	int n2 = fact2(5);

	// fact2는 constexpr 함수 입니다.
	int k = 5;

	constexpr int ret1 = fact2(5); // 반드시 컴파일 할때 수행

	int ret2 = fact2(5);   // 컴파일러 마다 다름
							// 실행할때 할수도 있고 컴파일할때할수도있다

	const int ret3 = fact2(5); // 위와 동일

	int ret4 = fact2(k); // 인자가 변수이므로 컴파일 할때 할수없다.
						 // 실행할때 호출

	constexpr int ret5 = fact2(k); // error.
}