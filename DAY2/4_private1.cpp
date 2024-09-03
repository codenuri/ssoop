// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

struct Person
{
private:				// private 영역
	std::string name;	// 이곳에 있는 모든 멤버는 외부에서 접근할수없고
	int  age;			// 멤버 함수만 접근 가능	

public:			// public 영역 : 외부에서도 접근 가능
	void set_age(int a)
	{
		age = a; // ok. 멤버 함수에서는 private 멤버 접근 가능
	}
};
int main()
{
	Person p;
//	p.name = "kim";	// error
//	p.age = -10;	// 사용자가 실수 했다.	
					// error. private 은 외부 접근 안됨
	p.set_age(-10);
}
