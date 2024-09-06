#include <vector>

// 예전에 만들어둔 함수
// => 인자로 배열을 받고 있는 함수
void foo(int* arr, int sz) {}

int main()
{
	int x[5] = { 1,2,3,4,5 };
	foo(x, 5);

	std::vector<int> v = { 1,2,3,4,5 };

	// foo 에 v 보내 보세요. ??

}