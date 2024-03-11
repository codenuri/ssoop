int x = 0;

int  foo() { return x; } // x의 값 "0" 반환
int& goo() { return x; } // x의 별명 반환

int main()
{
	foo() = 20; // error. "0 = 20" 의 의미.
	goo() = 20; // ok.    "x = 20" 의 의미.

	// 핵심 1. 함수가 reference 를 반환하면 
	//	       함수 호출을 등호의 왼쪽에 놓을수 있습니다
	//         "reference 를 반환하는 함수는 lvalue 이다."
	//         "lvalue    를 반환하는 함수는 rvalue 이다."
}
// 주의 사항 : 지역변수는 절대 reference 반환하면 안됩니다.
// 전역변수, 멤버 데이타, static 지역변수등, 파괴되지 않은 것만 참조반환가능
int& hoo()
{
	int x = 0;
	return x; // 버그.. 절대 이렇게 하면 안됩니다.
				
}