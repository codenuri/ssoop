#include <iostream>
#include <string>


// struct : 접근지정자 생략시 디폴트값은 public
// class  : 접근지정자 생략시 디폴트값은 private

// C++ : struct 와 class 의 차이점은 오직 한개(위 내용) 밖에 없습니다.
//	     완전히 동일.
//       차이가 거의 없다면 굳이 class 키워드를 만들필요 없지 않나요 ??
//       => 그래서 Rust 언어는 struct 만 있습니다

// C#, Java : struct 와 class 는 완전히 다릅니다.
//            나중에 학습해 보세요.

//struct Person
class Person
{
//private:				
	std::string name;	
	int  age;			

public:				
	void set_age(int a)
	{
		if ( a > 0 && a < 150)
			age = a;
	}
};

int main()
{
	
}
