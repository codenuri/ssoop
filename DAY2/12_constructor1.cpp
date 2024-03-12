// 5_생성자1.cpp
#include <iostream>
#include <string>

class Person
{
//public:
	std::string name;
	int  age;
public:
	void init(const std::string& s, int a)
	{
		name = s;
		age = a;
	}

	// 생성자(constructor)
	// => 클래스(구조체) 이름과 동일한 이름의 멤버 함수
	// => 반환 타입을 표시하지 않고, 반환 값도 없다
	// => 객체를 생성하면 생성자가 자동으로 호출된다.
	Person(const std::string& s, int a)
	{
		name = s;
		age = a;
	}	
};

int main()
{
	// #1. 멤버 데이타가 모두 public 에 있다면 아래 처럼 초기화 가능합니다.
	// => struct 와 동일
	// => 하지만 멤버 데이타가 private 있다면 아래 코드는 에러 입니다.
//	Person p = { "kim", 28 }; 


//	Person p;
//	p.init("kim", 28);

	Person p("kim", 28);
}


