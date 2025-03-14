#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People(const std::string& name, int age)
		: name(name), age(age)
	{
	}
};

// 아래 주석대로 코드 작성해 보세요
// 1. People 에서 파생된 Student 만드세요
// 2. int id 멤버 데이타 추가하세요
// 3. Student 생성자 만들어 보세요
// 4. main 에서 Student 객체 생성해 보세요

class Student : public People
{
	int id;
public:
	// 아래 처럼 만들면 People 디폴트 생성자가 없으므로 에러 입니다.
//	Student(int id) : id(id) {} // Student(int id) : id(id) { call People::People()} 

	// 해결책  : 아래 처럼 People 의 생성자를 명시적으로 호출
	Student(const std::string& name, int age, int id) 
		: People(name, age), id(id) {}
};

int main()
{
	Student s1("kim", 30, 99);
	Student s2("lee", 20, 88);

}



