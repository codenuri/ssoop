// explicit1.cpp
class vector
{
public:
	vector(int sz) {}
};
void foo(vector v) {}

int main()
{
	// #1. 인자가 한개인 생성자가 있으면
	// 아래와 같이 4가지 형태로 객체를 만들수 있습니다.
	vector v1(10);		// C++98. direct initialization
	vector v2 = 10;		// C++98. copy   initialization
	vector v3{ 10 };	// C++11. direct initialization
	vector v4 = { 10 }; // C++11. copy   initialization
	
	foo(10); // 함수의 인자 전달은 "copy initialization"
			 // "vector v = 10" 의 코드 입니다.
}