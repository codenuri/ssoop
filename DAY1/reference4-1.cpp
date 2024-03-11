// 인자의 값을 읽기만 하려고 합니다.
// 다음중 좋은 코드는 ?

void f1(int n)        // good
{ 
	int k = n;
}	
void f2(const int& r) // bad
{ 
	int k = r; //  (*r)
}	
							

int main()
{
	int x = 3;
	f1(x);
	f2(x);	
}
// 함수 인자를 만드는 규칙

// 1. 인자로 전달된 변수를 읽기만 한다면(in parameter)
// primitive type   : call by value               f1(int n) {}
// user define type : call by const-reference     f1(const std::string& n) {}
//				                                  f2(const BigData& bd){}

// 2. 인자값을 변경해야 한다면
// => non-const reference 가 pointer 보다 좋다.!

// 3. 위치(배열의 특정 위치를 전달해서 ++ 등으로 이동) 전달
// => pointer 사용
int x[3] = {1,2,3};
f1(x);