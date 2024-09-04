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
// 1. People 에서 파생된 Student 만드세요
// 2. "int id" 멤버 데이타 추가하세요
// 3. Student 만드세요
// 4. main 에서 Student 객체 생성해 보세요



int main()
{
	People p("kim", 30);

//	People p;	// 이렇게 객체를 만들수 있게 하면 좋을까요 ?
				// 이름과 나이가 초기화 되지 않은 쓰레기값을 가지는 객체
}



