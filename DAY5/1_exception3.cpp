#include <iostream>

// ������ ���ܸ� �޴� ��� : try ~ catch

int db_backup()
{
	if (1)		
		throw 1;

	return 100;
}
void db_remove() { std::cout << "db_remove\n"; }

int main()
{
	// #1. ���� ���ɼ��� �ִ� �Լ��� ȣ���Ҷ��� try{} �ȿ��� ȣ��
	try
	{
		int ret = db_backup();
	}
	catch (int e)
	{
		std::cout << "���ܹ߻�\n";
		// ���⼭ �߻��� ���ܸ� �����ؼ� �ذ��Ҽ� ������
		// ����ڿ��� �˸��� ���μ��� ����
		// std::exit(-1);

		// �׷��� ������ ���α׷��� ��� ���డ��
	}


	db_remove();
}