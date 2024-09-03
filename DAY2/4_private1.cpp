// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// 캡슐화(encapsulation)
// => 멤버 데이타를 private 놓고,
// => 잘정의된 public 멤버 함수에 의해서만 변경되게 한다
// => 외부의 잘못된 사용으로 부터 객체의 상태가 불안해 지는 것을 막는다.


struct Person
{
private:				// private 영역
	std::string name;	// 이곳에 있는 모든 멤버는 외부에서 접근할수없고
	int  age;			// 멤버 함수만 접근 가능	

public:			// public 영역 : 외부에서도 접근 가능
	void set_age(int a)
	{
		// 인자 값이 유효한 경우만 멤버의 상태를 변경한다.
		if ( a > 0 && a < 150  )
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
