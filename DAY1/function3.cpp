// function overloading
// 37 page

// C, Python : 동일한 이름의 함수를 2개 이상 만들수 없습니다.

// C++, C#, Java : 인자의 갯수나 타입이 다르면 동일한 이름의 함수를
//				   여러개 만들수 있습니다.
//                "function overloading" 이라고 합니다.
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}


int main()
{
	square(3);
	square(3.4);
}

// 주의!! 함수 호출시 어느 함수인지 구별 가능해야 합니다.
void f1(int a) {}
void f1(int a, int b = 0) {}

f1(0); // error. 어느 함수인지 알수 없다.

void f2(int a) {}
char f2(int a) { return 0;}
f2(0); // error