#include <iostream>
#include <string>

// 128 page ~

// 모든 사람의 공통의 특징을 담은 클래스
class Person
{
	std::string name;
	int age;
};

// 상속(inheritance)
// => 기존타입(Person) 을 확장해서 새로운 타입을 설계

// C++    : class Student : public Person
// C#     : class Student : Person
// Python : class Student (Person)
// Java   : class Student extends Person
// Rust   : 상속문법 없음.


// 용어
// Person : Base(기반) Class,    Super Class,   Parent Class
// Student: Derived(파생) Class, Sub   Class,   Child  Class


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
