// 핵심
// static member function 은 객체가 없어도 호출가능하다.!
// 객체가 없어도 static member data 는 메모리에 있다
class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요
	// foo() 는 객체가 있을때만 호출 가능하다.
	void foo()	// void foo(Car* this)
	{
		color = 0;	// 1. ok		this->color = 0
		cnt = 0;	// 2. ok
		goo();		// 3. ok

		std::cout << this; // 4. ok
	}
	static void goo()		// void goo() 
	{
//		color = 0;	// 5. error	 this->color 처럼, 어디에있는지 알아야 하는데
					//		     static 멤버 함수에서는 this가 없다.!!
					//			 그래서 이 코드가 에러.
		cnt = 0;	// 6. ok
		foo();		// 7. error

		std::cout << this; // 8. error.
	}
};
int Car::cnt;

int main()
{
	Car c;
	c.foo();	// call foo(&c)
				// 즉, 멤버함수는 인자로 객체 주소 전달

	Car::goo(); // call goo()   즉, static 멤버 함수는 객체전달안됨
	c.goo();    // 이렇게 호출해도 문법적으로 static 멤버함수는
				// call goo() 즉, c 주소 전달 안됨
}

// 결론
// => static 멤버 함수에서는 _static member_ 만(data, function) 접근 가능하다.