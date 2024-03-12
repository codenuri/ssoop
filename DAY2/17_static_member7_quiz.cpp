// 핵심
// static member function 은 객체가 없어도 호출가능하다.!
// 객체가 없어도 static member data 는 메모리에 있다
class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요
	void foo()	
	{
		color = 0;	// 1. 
		cnt = 0;	// 2. 
		goo();		// 3. 

		std::cout << this; // 4.
	}
	static void goo()	
	{
		color = 0;	// 5. 
		cnt = 0;	// 6. 
		foo();		// 7. 

		std::cout << this; // 8.
	}
};
int Car::cnt;

int main()
{
	Car::goo(); 
}
