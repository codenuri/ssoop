
class Sample
{
	int data1;
	const int data2;
public:
	Sample(int a, int b)
	{
		data1 = a;
		data2 = b;
	}
};
int main()
{
	Sample s(10, 20);
}
// 위 코드가 에러인지 아닌지 ? 왜 에러인지 ? 어떻게 하면 되는지 생각해 보세요
