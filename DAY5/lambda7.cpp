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
			k = 10;
		}
	};
}