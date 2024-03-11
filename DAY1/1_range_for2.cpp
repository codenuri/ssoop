#include <iostream>
#include <ranges> // C++20 에서 도입되는 헤더
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	namespace rg = std::views;

//	for( auto e : x)
//	for( auto e : std::views::take(x, 5) )
//	for( auto e : std::views::reverse( std::views::take(x, 5) ) )
	for( auto e : rg::reverse( rg::take(x, 5) ) )
		std::cout << e << ", ";
}
