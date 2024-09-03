// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// struct vs class 

// struct : 접근 지정자를 표기하지 않으면 디폴트가 public
// class  : 접근 지정자를 표기하지 않으면 디폴트가 private

// => 위 차이점 외에는 "struct" 와 "class" 는 완전히 동일합니다.
// => 단, Java, C#은 아주 큰 차이가 있습니다.
// => Rust 언어는 "struct" 만 있습니다. 

//struct Person
class Person
{
//private:				
	std::string name;	
	int  age;			

public:			
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
};
int main()
{
	Person p;
	p.set_age(-10);
}
