// 생성자1.cpp
// 80page 
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;

public:
	void init(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
	// 생성자
	// 1. 클래스 이름과 동일한 함수
	// 2. 반환 타입을 표기하지 않는다.
	// 3. 객체를 만들면 자동으로 호출된다.
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};

int main()
{
	// #1. 멤버 데이타가 모두 public 에 있다면 아래 처럼 초기화 가능합니다.
	// => struct 와 동일
	// => 단, 멤버 데이타가 private 에 있으면 에러.
	// Person p = { "kim", 28 }; 

	// #2. 멤버 데이타가 private 에 있는 경우
	//     멤버 함수로 초기화해야 합니다.
//	Person p;
//	p.init("kim", 28);

	// #3. 생성자를 사용한 객체 초기화
	Person p("kim", 28);
}


