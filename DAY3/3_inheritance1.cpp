#include <iostream>
#include <string>

// 133 page ~

// ��� Ÿ���� ���� �����ϰ�. 
class Person
{
	std::string name;
	int age;
};

// ���� Ŭ����(Person) �� Ȯ���ؼ� ���ο� Ÿ���� ���� �մϴ�.
// => ���(inheritance) ����

// C++     : class Student : public Person
// C#      : class Student : Person
// PYTHON  : class Student( Person )
// Java    : class Student extends Person


// Person  : Base Class(���),  Super Class,   Parent Class
// Student : Derived Class(�Ļ�), Sub Class,   Child Class 


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