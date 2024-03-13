// C++ 의 접근지정자는 3개 입니다.
// => private, protected, public
// => 상속을 사용하지 않은 경우는 protected 는 private 과 같은 의미
// => 대부분의 객체지향 언어가 이 3개는 지원 합니다.


class Base
{
private:   	// 자신의 멤버 함수에서만 접근 가능
	int a;	

protected: 	// 자신의 멤버 함수와 파생 클래스의 멤버 에서 접근 가능
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
		a = 0;	// error. 기반 클래스 private 은 파생 클래스에서도 접근 안됨.
		set_a(0); // ok.  기반 클래스의 public 함수를 사용해서 접근

		b = 0;  
		c = 0;  
	}
};
int main()
{
	Base base;
	base.a = 0; 
	base.b = 0; 
	base.c = 0; 
}
