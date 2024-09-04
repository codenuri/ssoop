#include <vector>
#include <string>

void f1(std::string s) {}
void f2(std::vector<int> v) {}

int main()
{
	std::string s1("hello");
	std::vector<int> v1(10);

	f1("hello");
	f2(10);
}