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


// C++ 은 3개의 접근 지정자가 있습니다.
// => private, protected, public

// 다른 객체지향 언어는 "위 3개" 는 대부분 지원하고
// 추가로 1~2개 더 있는 경우가 있습니다
// internal, file 등( 같은 파일내에서 접근 가능)