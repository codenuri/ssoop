// 1_constexpr3.cpp
// godbolt.org �� �Ʒ� �ڵ� ��������
int fact1(int n)
{
	if (n == 1) return 1;
	return n * fact1(n - 1);
}

// ���ڰ��� ������ �Ҷ� �˼� ������ "������ �ð�"
// ���ڰ��� ������ �Ҷ� �˼� ������ "���� �ð�" �� ����. 
constexpr int fact2(int n)
{
	if (n == 1) return 1;
	return n * fact2(n - 1);
}

int main()
{
	int n1 = fact1(5); 
	int n2 = fact2(5);

	// fact2�� constexpr �Լ� �Դϴ�.
	int k = 5;

	constexpr int ret1 = fact2(5); // �ݵ�� ������ �Ҷ� ����

	int ret2 = fact2(5);   // �����Ϸ� ���� �ٸ�
							// �����Ҷ� �Ҽ��� �ְ� �������Ҷ��Ҽ����ִ�

	const int ret3 = fact2(5); // ���� ����

	int ret4 = fact2(k); // ���ڰ� �����̹Ƿ� ������ �Ҷ� �Ҽ�����.
						 // �����Ҷ� ȣ��

	constexpr int ret5 = fact2(k); // error.
	const int ret6 = fact2(k); // ok. const �� readonly �� �䱸�ϹǷ�
}