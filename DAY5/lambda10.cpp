#include <algorithm>
#include <string>

int main()
{
	int n1 = std::max(10, 2); // C++98 버전의 max
	int n2 = std::ranges::max(10, 2); // C++20 버전의 max
										// 좋은 기능이 많습니다.
	int n3 = std::ranges::max.operator()(10, 2);

	std::string s1 = "AB";
	std::string s2 = "XYZ";

	auto ret1 = std::ranges::max(s1, s2); // 알파벳 비교
	auto ret2 = std::ranges::max(s1, s2, {}, &std::string::size ); 
											// 문자열 길이 비교
}