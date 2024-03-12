#include <string>

class Person1
{
	std::string name;
	int age;
public:
	Person1(const std::string& n, int a) 
	{
		// 컴파일러가 name 의 디폴트 생성자를 호출하는 코드 추가
		// "call string::string()" <== 이렇게

		name = n;	// name.operator=(n) 으로 넣은것, 즉, 초기화가 아닌 대입
					// 결국, 생성자 호출후 대입연산자 호출해서 넣은것
					// 2번의 함수 호출 발생

		age = a;
	}
};

// Person1 p1("kim", 20);




class Person2
{
	std::string name;
	int age;
public:
	// 초기화 리스트는 "대입이 아닌 초기화" 입니다.
	// => 즉, 멤버에 생성자를 호출하는 코드를 만들때 "name(n)" 모양으로 해달라는
	//   요청
	Person2(const std::string& n, int a) : name(n), age(a)
	{
		// 초기화 리스트 표기법 때문에 아래 코드처럼 생성됨.
		// call string::string(n)
	}
};



int main()
{
	Person1 p1("kim", 29);	
	Person2 p2("kim", 29);
}