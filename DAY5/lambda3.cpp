#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 함수 : 동작은 있지만 상태가 없습니다.

// 함수객체 : 동작도 있고, 상태도 있습니다.(멤버 데이타가 있다는 의미)

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


	// 한번만 사용한다면 임시객체로
	auto ret1 = std::find_if(v.begin(), v.end(), IsDivide{ k } );
						// => "IsDivide{k}" 는 함수 인자로
						// => "단항함수 + 지역변수 k의 값" 을 같이전달 
}

// closure : 자신이 속한 문맥의 지역변수를 캡쳐할수 있는
//			 "인자로 전달 가능한" 함수(객체)

// C++ 일반함수 : Closure 가 될수 없습니다.
//     함수객체 : Closure 가 될수 있습니다.