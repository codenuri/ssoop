// 후위 반환 타입
// 42page

// 전통적인 함수의 모양 : 반환 타입이 함수 이름 앞에 있습니다.
int square1(int a)
{
	return a * a;
}

// C++11 에서 도입된 새로운 함수 모양 : 후위 반환 타입(suffix return type)
auto square2(int a) -> int
{
	return a * a;
}
int main()
{
	square2(3);
}
