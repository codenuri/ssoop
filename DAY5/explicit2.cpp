#include <vector>
#include <string>

void foo(std::string s) {}
void goo(std::vector<int> v) {}

int main()
{
	foo("hello");// 논리적으로 맞습니다.
				 // 되어야 합니다.
				 // 지금 잘 됩니다.
				 // 즉, std::string s = "hello" 가 에러가 아니라는 의미

	std::string s1("hello");	// ok
	std::string s2 = "hello";	// ok. 	
								// string(const char* ) 생성자는 explicit 아님

	goo(10);	// 안되는게 좋습니다.
				// 그래서. error.

	std::vector<int> v1(10);	// ok
	std::vector<int> v2 = 10;	// error.
								// vector(int) 생성자는 "explicit"

	// 어제 스마트 포인터 수업
//	std::shared_ptr<Car> sp = new Car; // error
//	std::shared_ptr<Car> sp(new Car);  // ok
}




