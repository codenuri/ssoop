
class Sample
{
	int data1;
	const int data2;
public:
	Sample(int a, int b) : data(b)
	{
		data1 = a;
//		data2 = b; // error. data2 는 const 입니다.
				   // 1. const 는 대입될수 없습니다.
				   // 2. 이 코드를 주석으로 막아도, 초기화 하지 않으면 error.
	}
};
int main()
{
	Sample s(10, 20);
}
// 위 코드가 에러인지 아닌지 ? 왜 에러인지 ? 어떻게 하면 되는지 생각해 보세요
