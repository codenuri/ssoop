// S/W 에서 "상수 관련 2가지 개념"

int main()
{
	int s1 = 10;
	const int s2 = 10;
	const int s3 = s1;

	// 아래 4줄에 대해서 생각해 봅시다.
	int x1[10]; // ok
	int x2[s1]; // ?
	int x3[s2]; // ?
	int x4[s3]; // ?
}