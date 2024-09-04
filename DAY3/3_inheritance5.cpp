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
// 3. Student 생성자 만드세요
// 4. main 에서 Student 객체 생성해 보세요

class Student : public Peolple
{
	int id;
public:
	// 아래 처럼 만들면, 오른쪽 주석처럼 변경됩니다.
	// => People 에 디폴트 생성자가 없으므로 에러
	// Student(int id) : id{ id } {} // Student(int id) : People{}, id{id} {}

	Student(const std::string& name, int age, int id) 
		: People{name, age}, id { id } {}
};

int main()
{
	Student s{ "kim", 30, 15 }; 

	People p("kim", 30);

	
	

//	People p;	// 이렇게 객체를 만들수 있게 하면 좋을까요 ?
				// 이름과 나이가 초기화 되지 않은 쓰레기값을 가지는 객체
}



