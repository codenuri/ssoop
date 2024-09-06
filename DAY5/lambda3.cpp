#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int a) { return a % 3 == 0; }

// 아래 코드 잘생각해보세요
struct IsDivide
{
	int value;

	IsDivide(int n) : value(n) {}

	bool operator()(int n) { return n % value == 0; }
};




int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	int k = 3; 

	IsDivide f(k); // f는 내부적으로 3을 보관

	bool b = f(10); // f는 단항함수 입니다.
					// bool b = 10 % k  의 의미 입니다.
					
					// => 결국 f는 "k값을 캡쳐한 단항함수" 입니다

	auto ret1 = std::find_if(v.begin(), v.end(), f );

}