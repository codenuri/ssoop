#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People(const std::string& name, int age)
		: name{ name }, age{ age }
	{
	}
};

int main()
{
	People p("kim", 30);

//	People p;	// 이렇게 객체를 만들수 있게 하면 좋을까요 ?
				// 이름과 나이가 초기화 되지 않은 쓰레기값을 가지는 객체
}



