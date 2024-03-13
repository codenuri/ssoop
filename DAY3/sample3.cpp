// sample3.cpp
class A 
{
public:
	void cry() {}
};
class B
{
public:
	void cry() {}
};
// 멤버 함수 cry 를 가진 모든 객체를 인자로 받고 싶다.
void foo(A c) { c.cry();}

int main()
{
	A a;
	B b;
	foo(a);
	foo(b);
}