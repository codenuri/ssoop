// 4_����������1 - 74page
#include <iostream>
#include <string>

// struct vs class 

// struct : ���� �����ڸ� ǥ������ ������ ����Ʈ�� public
// class  : ���� �����ڸ� ǥ������ ������ ����Ʈ�� private

// => �� ������ �ܿ��� "struct" �� "class" �� ������ �����մϴ�.
// => ��, Java, C#�� ���� ū ���̰� �ֽ��ϴ�.
// => Rust ���� "struct" �� �ֽ��ϴ�. 

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