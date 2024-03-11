// nullptr. 24 page
int main()
{
	int  n1 = 0; // 0 은 정수(int) 타입이지만
	int* p1 = 0; // 포인터 초기화시에도 사용가능합니다

//	int* p2 = 10; // error.

	// 정수 0 을 가지고 포인터 처럼 사용하는 것은
	// 복잡한 코드에서 문제가 되는 경우가 많습니다.
	// 그래서 C++11 부터는 nullptr 사용하세요
	int* p3 = nullptr; // ok. 좋은 코드
//	int  n3 = nullptr; // error.
}