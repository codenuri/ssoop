// default parameter
// 34 page

// default parameter : 인자를 전달하지 않으면 디폴트 값 사용
// 주의 사항 
// #1. 함수를 선언과 구현으로 분리시 선언에만 표기해야 합니다.
// #2. 마지막 인자 부터 차례대로만 지정 가능합니다.

//void f1(int a = 0, int b    , int c = 0) {} // error
//void f2(int a,     int b = 0, int c = 0) {} // ok
//void f3(int a,     int b = 0, int c) {}     // error


void foo(int a = 0, int b = 0, int c = 0);

int main()
{
	foo(1, 2, 3);
	foo(1, 2);		// foo(1, 2, 0)
	foo(1);			// foo(1, 0, 0)
	foo();
}

void foo(int a /*= 0*/, int b /*= 0*/, int c /*= 0*/)
{
}

// godbolt.org 접속후에 위 코드를 왼쪽창에 넣어 보세요
