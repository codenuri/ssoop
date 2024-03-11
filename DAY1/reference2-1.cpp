int main()
{
	int n = 0;

	int* p = &n;
	int& r = n;

	// 아래 2줄의 어셈블리코드(godbolt.org) 를 보세요
	*p = 10;
	r = 10;
}