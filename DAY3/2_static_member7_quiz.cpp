// static 멤버 데이타 : 객체 없어도 메모리에 존재
// static 멤버 함수   : 객체 없이 호출가능

class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요
	void foo()	
	{
		// foo 를 호출했다는 것은 "객체가 있는 상태"
		// 아래 코드는 모두 가능.
		color = 0;	// 1. ok
		cnt = 0;	// 2. ok
		goo();		// 3. ok
		std::cout << this; // 4. ok
	}
	static void goo()	
	{
		color = 0;	// 5. error.
					//    객체 없이 호출하는데, color 는 객체가 있어야 한다.
		cnt = 0;	// 6. ok
		foo();		// 7. error

		std::cout << this; // 8. error
	}
};
int Car::cnt;

int main()
{
	Car::goo(); // 객체 없이 호출
}

// 핵심
// "static 멤버 함수" 는 객체가 없이 실행되는 것
// => static 멤버(데이타, 함수) 만 접근 가능하다.