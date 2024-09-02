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

// 함수 인자로 받은 것을 수정하려고 합니다.
// => pointer 또는 reference 로 받으면 됩니다.
// => 그런데, reference 가 안전 합니다.
// 
// void f1(int* p) {} // 가능하지만, 안전성 부족
// void f2(int& r) {} // ok. 위 보다 안전


// 함수 인자로 받은 것을 읽기만 하려고 합니다.

// 1. 인자타입이 primitive(int, double등)인 경우 - call by value
//    void f1(int n) {}

// 2. 인자 타입이 user define type(구조체, 클래스) - const reference
//    void f2(const Rect& rc) {}