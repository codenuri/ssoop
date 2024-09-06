// lambda7.cpp

// 핵심 : 지역변수 캡쳐의 종류와 원리

int main()
{
	int k = 0;

	auto f1 = [k] () { k = 10; };
	auto f3 = [&k]() { k = 10; };
}