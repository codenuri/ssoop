#include <vector>

// ������ ������ �Լ�
// => ���ڷ� �迭�� �ް� �ִ� �Լ�
void foo(int* arr, int sz) {}

int main()
{
	int x[5] = { 1,2,3,4,5 };
	foo(x, 5);

	std::vector<int> v = { 1,2,3,4,5 };

	// foo �� v ���� ������. ??
	foo(v, v.size()); // error
	foo(&v, v.size()); // error. ���۰� �ƴ� vector ��ü�� �ּ�

	foo(&v[0], v.size()); // ok

	foo(v.data(), v.size()); // ok

//	int* p = v.data();
}