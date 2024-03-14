#include <iostream>
#include <string>

int main()
{
	std::string s1 = "hello";
	std::string s2 = "world";

	std::string s3 = s1 + s2; // operator+(string, string) 호출

	s1 == s2; // operator==(string, string)

	std::cout << s3 << std::endl;
}
