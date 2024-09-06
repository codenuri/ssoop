// lambda7.cpp

// 핵심 : 지역변수 캡쳐의 종류와 원리

int main()
{
	int k = 0;

	auto f1 = [k] ()         { k = 10; }; // error. capture by value
	auto f2 = [k] () mutable { k = 10; }; // ok. 그런데, 복사본에 쓴것
	auto f3 = [&k]()         { k = 10; }; // ok  capture by reference

	// f1 원리
	class GeneratedName1
	{
		int k;
	public:
		GeneratedName1(int n) : k(n) {}

		void operator()() const
		{
			k = 10;	// error. 상수멤버 함수에서 값을 변경하기 때문
		}
	};
	auto f1 = GeneratedName1{ k };
	//==========================================

	// f2 원리
	// mutable 람다 : operator()() 함수를 상수 함수로 하지 말라.
	class GeneratedName2
	{
		int k;
	public:
		GeneratedName2(int n) : k(n) {}

		void operator()() 
		{
			k = 10;	// ok. 복사본 k 변경
					// main 의 지역변수 k 는 변화 없음. 
		}
	};
	auto f2 = GeneratedName2{ k };

	//============================
	// f3 원리
	class GeneratedName3
	{
		int& k;
	public:
		GeneratedName3(int& n) : k(n) {}

		void operator()() const
		{
			k = 10;	 // ok. main 지역변수 k가 변경
					 // k는 참조지만 결국 포인터 개념
					 // 이코드는 k의 변경이 아닌 k가 가리키는 것을 변경
					 // 그래서 상수함수라도 에러 아님. 
		}
	};
	auto f3 = GeneratedName3{ k };
}