int main()
{
	// 람다 표현식을 함수 포인터에 담을수 있습니다.
	int(*f)(int, int) = [](int a, int b) { return a + b; };
						// class xxx {}; xxx{}

	// 원리는 다음소스에서.. 

	
	// 그런데 "캡쳐한 람다표현식은 함수 포인터로 변환될수 없습니다."
	// 캡쳐하면 함수객체에 멤버 데이타가 생기고
	// operator()() 에서 접근하게 되는데,
	// 이런일과 동일한 static 함수를 만들수 없습니다!
	int k = 0;

	int(*f1)(int, int) = [k](int a, int b) { return a + b + k; };
}