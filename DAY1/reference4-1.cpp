// 인자의 값을 읽기만 하려고 합니다.
// 다음중 좋은 코드는 ?

void f1(int n)        { int k = n;}
void f2(const int& r) { int k = r;}

int main()
{
	int x = 100;
	f1(x);
	f2(x);	
}