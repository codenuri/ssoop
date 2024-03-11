// S/W 에서 "상수 관련 2가지 개념"
// 1. immutable : 값을 변경할수 없는것!! 이라는 개념
// 2. constant expression : 컴파일 시간에 값을 알수 있는 것.

// 일부 컴파일러에서 배열의 크기는 constant expression 이어야 한다.

// C/C++ 의 const : immutable 변수를 만드는 것!!
//					constant expression 을 보장하지는 않는다.
int main()
{
	int s1 = 10;

	const int s2 = 10;
	const int s3 = s1;

	// 아래 4줄에 대해서 생각해 봅시다.
	int x1[10]; // ok
//	int x2[s1]; // C89 : 배열의 크기는 컴파일 시간에 알아야 한다.
				// C99 : 배열의 크기로 변수도 가능
				//		 g++ 지원, cl 컴파일러(visual studio) : 지원안함
	int x3[s2]; // s2 는 컴파일 시간에 값을 알수 있는 상수이므로 이 코드는 cl 컴파일러도 가능.
	int x4[s3]; // cl 컴파일러는 에러. s3 의 값을 컴파일 시간에 알수 없다.
}



