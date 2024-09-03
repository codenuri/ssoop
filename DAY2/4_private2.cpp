// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// struct vs class 

struct Person
{
private:				
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
