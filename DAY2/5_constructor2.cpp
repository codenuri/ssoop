#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// 핵심 1. 생성자는 여러개 만들수 있다.
	Person(const std::string& n, int a)
	{
		std::cout << "생성자1 호출됨" << std::endl;
		name = n;
		age = a;
	}	

	Person()
	{
		std::cout << "생성자2 호출됨" << std::endl;
		name = "unknown";
		age = 0;
	}

	// 소멸자 : "~클래스이름" 모양의 함수
	//			반환값과 인자가 없다. 오직 한개만 만들수 있다.
	//		    객체가 파괴 될때 호출.
	~Person() { std::cout << "소멸자" << std::endl; }
};

int main()
{
	Person p1("kim", 28); // 생성자1 호출
	Person p2;			  // 생성자2 호출

} // <= p1, p2 파괴. 소멸자 함수 호출


// 생성자 목적
// => 객체 생성시 멤버 데이타를 초기화 하기 위해서
// => private 멤버 초기화

// 소멸자
// => 필요한 경우만 만들면 됩니다.
// => 필요하지 않으면 만들 필요 없습니다.
// => 오후에 사용하는 예제 나옵니다