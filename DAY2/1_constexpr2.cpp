// ���� �迭�� ũ��
// C89 : �ݵ�� ������ �ð��� �˾ƾ� �Ѵ�.
// C99 : ������ �ɼ� �ִ�.(����ð��� ������ ���� ����)
//       => ��, gcc, clang �� ���������� vs �� ���� ����.
// 
// constexpr function
// => ���ڰ��� ������ �ð��� �˼� �ְ�, 
// => �Լ� ȣ���� ����� ������ �ð��� �˾ƾ� �ϴ� ���ƿ� �ִٸ�
// => �Լ� ������ ������ �ð��� �ش޶�.

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