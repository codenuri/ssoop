// 동일한 이름의 const , non-const 멤버 함수가 가능합니다.
// 그래서 const 멤버함수는 "선언과 구현에 모두 필요"
/*
class A 
{
public:
	void foo() const {}
	void foo()  {}
};

int main()
{
	const A ca; 
	ca.foo(); // foo const 호출

	A a; 
	a.foo(); // foo() 있으면 사용
			// 없으면 foo() const 호출
}
*/