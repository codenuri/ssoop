class Base
{
private:   	// 멤버 함수에서만 접근 가능
	int a;	

protected: 	// 멤버 함수와 파생 클래스의 멤버 에서 접근 가능
	int b;	

public:    	// 모든 함수에서 접근 가능
	int c;	

	void set_a(int v) { a = v;}
};

class Derived : public Base  
{
public:
	void foo()
	{
		a = 0;	// error. Base 로 부터 물려는 받지만
				//        여기서 접근 안된다.
				//        접근하려면 Base 멤버 함수 사용
		set_a(0); //<= 이렇게 !!

		b = 0;  // ok. protected 는 파생에서 접근 가능

		c = 0;  // ok. public 은 어디서도 접근 가능
	}
};
int main()
{
	Base base;
	base.a = 0;  // error
	base.b = 0;  // error.  즉, b는 파생 클래스는 허용하지만
				 //			외부 접근은 안됨
	base.c = 0;  // ok
}
