#include <iostream>

// primitive type 이 아닌 
// "예외 전용 타입설계"

class MemoryException
{
	// 몇몇 멤버로 추가 정보를 담아도 되고
};

// 아래와 같이 아무 멤버도 없는 클래스로 설계해도 됩니다.
// => 클래스 이름 자체가 설명
class FileNotFoundException {};

int db_backup()
{
	if (1)
		throw MemoryException{}; // 임시객체 형태로 던지는 것이 관례
	
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
		std::cout << "예외발생\n";
	}
	catch (FileNotFoundException& e)
	{

	}
	catch (...) // 위에서 처리되지 않은 모든 예외 처리
	{

	}

	db_remove();
}
