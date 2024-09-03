#include <string>

class Person1
{
	std::string name;
	int age;
public:
	Person1(const std::string& n, int a) 
	{
		// name 의 디폴트 생성자가 호출된후
		name = n;	// name.operator=(n) 으로 대입한것
					// 즉, 이코드는 대입으로 값을 넣은것
		age = a;
	}
};

// Person1 p("kim", 20);








class Person2
{
	std::string name;
	int age;
public:
	// 초기화 리스트
	// "대입연산자가 아닌 생성자를 통해서 초기화 해 달라는 것"
	// 단, 제어문이 필요했다면 "{}" 안에서 해야 합니다.
	Person2(const std::string& n, int a) : name(n), age(a)
//	Person2(const std::string& n, int a) : name{n}, age{a}
	{
		
	}
};

// Person p2("kim", 20);



int main()
{
	Person1 p1("kim", 29);	
	Person2 p2("kim", 29);
}