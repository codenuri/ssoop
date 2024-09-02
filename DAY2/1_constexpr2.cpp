// 참고 배열의 크기
// C89 : 반드시 컴파일 시간에 알아야 한다.
// C99 : 변수가 될수 있다.(실행시간에 결정된 값도 가능)
//       => 단, gcc, clang 은 지원하지만 vs 는 지원 안함.
// 
// constexpr function
// => 인자값을 컴파일 시간에 알수 있고, 
// => 함수 호출의 결과를 컴파일 시간에 알아야 하는 문맥에 있다면
// => 함수 실행을 컴파일 시간에 해달라.

int add1(int a, int b) { return a + b; }
constexpr int add2(int a, int b) { return a + b; }

int main()
{
	int x = 1, y = 2;

	int arr1[10];	// ok

	int arr2[add1(1, 2)]; // error.
	
	int arr3[add2(1, 2)]; // ok. 


//	int n1 = add1(1, 2);
//	int n2 = add2(1, 2);
//	int n3 = add2(x, y);
}