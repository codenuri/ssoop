// 1_레퍼런스4.  65 

int x = 0;
int foo()  { return x; } // "x" 를 반환 할까요?
						 // "x의 값 0" 을 반환 할까요 ? => 정답

int& goo() { return x; } // 0이 아닌 x 별명을 반환

int main()
{
	foo() = 20; // 0 = 20.. error

	goo() = 20; // x = 20;  ok 

	// 핵심 : 함수가 reference 로 반환하면
	//       함수 호출을 등호의 왼쪽에 놓을수 있습니다.
	//			( lvalue 가 될수 있다 라고 표현 합니다.
}
