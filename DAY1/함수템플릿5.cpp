#include <iostream>

// Add1 : 반환 타입 자체를 생략한 코드 - C++14 부터 가능한 코드
// => return 문장을 보고 반환 타입을 추론해 달라는 것
// => return 문장이 여러개이고 타입이 다르다면 컴파일 에러
template<typename T1, typename T2>
auto Add1(T1 a, T2 b)
{
	if (b == 0) return a;
	return a + b;
}

// Add2 : 반환 타입을 표기 한것 ( C++11 문법 사용)
// => return 문장이 여러개 있어도 가능.
template<typename T1, typename T2>
auto Add2(T1 a, T2 b) -> decltype(a + b)
{
	if (b == 0) return a;
	return a + b;
}

int main()
{
	std::cout << Add1(3, 4.1) << std::endl;
	std::cout << Add2(3, 4.1) << std::endl;

}