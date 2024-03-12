// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

struct Person
{
private:				// 이 부분 부터 새로운 접근지정자가 나올때 까지 모든 멤버는
	std::string name;	// 멤버 함수에서만 접근 가능합니다.
	int  age;			// 멤버가 아닌 함수에서는 접근 안됩니다.
};

int main()
{
	Person p;
	p.name = "kim";	// private 에 있으므로 컴파일 error.
	p.age = -10; 	// error. 사용자가 실수 했다.				 
}
