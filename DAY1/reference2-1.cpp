int main()
{
	int n = 0;

	int* p = &n;
	int& r = n;

	// 아래 3줄의 어셈블리코드(godbolt.org) 를 보세요
	*p = 10;
	r = 10;
	n = 10;

	// 레퍼런스 
	// => 안전하고(항상 초기화 되어야 하므로)
	// => 사용하기 쉬운(*p = 10 가 아닌 r = 10) 포인터 입니다.
}