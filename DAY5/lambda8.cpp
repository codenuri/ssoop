int main()
{
	// 람다 표현식을 함수 포인터에 담을수 있습니다.
	int(*f)(int, int) = [](int a, int b) { return a + b; };
						// class xxx {}; xxx{}

	// 원리는 다음소스에서.. 
}