// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// 캡슐화(encapsulation)
// => 멤버 데이타는 private 영역에 놓아서 외부에 잘못된 접근으로 객체의 상태가
//    불안해 지는 것을 막는다.

// => 객체의 상태는 오직 잘 정의된 멤버 함수를 통해서만 변경할수있다.

// => 객체가 항상 안전(유효한값)을 가짐을 보장한다.
// => 데이타와 함수를 묶어서 사용하기 때문에 가질수 있는 장점






struct Person
{
private:				// 이 부분 부터 새로운 접근지정자가 나올때 까지 모든 멤버는
	std::string name;	// 멤버 함수에서만 접근 가능합니다.
	int  age;			// 멤버가 아닌 함수에서는 접근 안됩니다.

public:				// 이 부분 부터는 멤버가 아닌 일반 함수도 접근 가능합니다
	void set_age(int a)
	{
		// 인자 값의 유효성을 확인해서
		// 유효한 경우만 객체의 상태를 변경한다.
		if ( a > 0 && a < 150)
			age = a;
	}
};

int main()
{
	Person p;
//	p.name = "kim";	// private 에 있으므로 컴파일 error.
//	p.age = -10; 	// error. 사용자가 실수 했다.				 

	p.set_age(-10);
}
