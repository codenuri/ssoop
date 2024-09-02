// 9_레퍼런스3-1.cpp

// 인자로 받은 것을 읽기만 하려고 합니다.
// 다음중 좋은 코드는  ?

void f1(int n)        { int a = n; } // good



void f2(const int& n) { int a = n; } // bad
					 // int a = *n

int main()
{
	int a = 10;
	f1(a);
	f2(a);
}