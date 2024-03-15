class vector 
{
public:
	// explicit 생성자 : direct initialization 은 가능하지만
	//					copy initialization 은 사용할수 없다.
	explicit vector(int sz) {}
};

void foo(vector v) {}

int main()
{
	// #1. 인자가 한개인 생성자가 있다면 아래처럼 4가지 형태로 객체 생성이 가능합니다.
	vector v1(10);		// direct initialization
	vector v2 = 10;		// copy initialization
	vector v3{10};		// direct initialization - C++11 이후
	vector v4 = {10};	// copy initialization   - C++11 이후

	// #2. 아래 한줄을 생각해 보세요
	foo( 10 );	// vector v = 10 의 의미 입니다.
				// 즉, 함수의 인자 전달은 "copy initialization"
}