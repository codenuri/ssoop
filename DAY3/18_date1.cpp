#include <string>

// 사원을 관리하는데, 생일정보도 관리하고 싶다.
class Person
{
	std::string name;
	int age;

//	int year;
//	int month;
//	int day;
	Date birth;	// 위처럼 year, month, day 를 따로 사용하는 것 보다
				// 이런 타입이 있으면 편리합니다.
};

int main()
{

}