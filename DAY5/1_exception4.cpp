#include <iostream>

// primitive type �� �ƴ� 
// "���� ���� Ÿ�Լ���"

class MemoryException
{
	// ��� ����� �߰� ������ ��Ƶ� �ǰ�
};

// �Ʒ��� ���� �ƹ� ����� ���� Ŭ������ �����ص� �˴ϴ�.
// => Ŭ���� �̸� ��ü�� ����
class FileNotFoundException {};

int db_backup()
{
	if (1)
		throw MemoryException{}; // �ӽð�ü ���·� ������ ���� ����
	
	if (2)
		throw FileNotFoundException{};

	return 100;
}
void db_remove() { std::cout << "db_remove\n"; }

int main()
{
	try
	{
		int ret = db_backup();
	}
	catch (MemoryException& e)
	{
		std::cout << "���ܹ߻�\n";
	}
	catch (FileNotFoundException& e)
	{

	}
	catch (...) // ������ ó������ ���� ��� ���� ó��
	{

	}

	db_remove();
}