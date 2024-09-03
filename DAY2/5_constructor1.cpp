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
	void init(std::string n, int a)
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
	Person p;
	p.init("kim", 28);
}


