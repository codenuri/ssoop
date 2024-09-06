#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int a) { return a % 3 == 0; }

// 아래 코드 잘생각해보세요
struct IsDivide
{
	int value;
	IsDivide(int n) : value(n) {}

	bool operator()(int n) { return n % value == 0; }
};




int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	int k = 3; 

	IsDivide f(k);

	bool b = f(10);

	auto ret1 = std::find_if(v.begin(), v.end(), ? );

}