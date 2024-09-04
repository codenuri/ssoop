#include <iostream>
#include <string>

// 133 page ~

// 사람 타입을 먼저 설계하고. 
class Person
{
	std::string name;
	int age;
};

// 기존 클래스(Person) 을 확장해서 새로운 타입을 설계 합니다.
class Student : public Person
{	
	int    id;
};

class Professor : public Person 
{
	int    major;
};

int main()
{
	Student s;
	Professor p;
}
