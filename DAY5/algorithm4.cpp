#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool is_even(int n) { return n % 2 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	auto ret1 = std::find_if( v.begin(), v.end(), is_even );

}

