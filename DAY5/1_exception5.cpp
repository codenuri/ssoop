// 1_exception5

void goo()
{
	// ���⼭ ���� �ߴ�
	// ��ȯ������ �˷��ִ� ��� : foo �� ���ļ� main �� �˷��� �մϴ�.
	// ���ܴ� �ѹ��� ���޵� �����մϴ�.
	throw 1; // �̼��� main �� catch �� �ٷ� �̵�
			 // => �������� ���� �ð��� �ְ�
			 // => �������� ���� ���۵� �ֽ��ϴ�.
			 // ���� C++ style guide : ���� ������� ����
			 // MS  C++ style guide : ���� ����ض�
}
void foo()
{
	goo();
}
int main()
{
	try
	{
		foo();
	}
	catch (int e) {}
}