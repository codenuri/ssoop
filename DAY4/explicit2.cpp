#include <vector>
#include <string>

void f1(std::string s)      {}
void f2(std::vector<int> v) {}

int main()
{
	// #1. std::string, std::vector 는 인자가 한개인 생성자가 있습니다.
	std::string s1("hello");
	std::vector<int> v1(10);

	// #2. 아래 각각의 코드가 되는게 좋을지 안되는게 좋을지 생각해 보세요
	f1("hello"); // 되는게 좋습니다. 잘됩니다
				 // std::string s = "hello" 가 된다는 의미
				 // std::string(const char*) 는 explicit 아님.
	f2(10); // 안되야 합니다. 지금 안됩니다
			// std::vector<int> v = 10 이 안된는다는 것
			// std::vector(int) 생성자는 explicit 로 설계되었습니다.
}