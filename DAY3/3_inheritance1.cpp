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
// => 상속(inheritance) 문법

// C++     : class Student : public Person
// C#      : class Student : Person
// PYTHON  : class Student( Person )
// Java    : class Student extends Person


// Person  : Base Class(기반),  Super Class,   Parent Class
// Student : Derived Class(파생), Sub Class,   Child Class 


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
