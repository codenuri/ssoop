#include <iostream>

#include <string>

// 예외 전달에 사용할 타입을 설계 합니다.
class file_not_found_exception
{
	std::string file_name;
public:
	file_not_found_exception(const std::string& name) 
		: file_name{name} {}

	// 최대한 자세한 오류 정보를 담을수 있도록 설계 합니다.
};

// empty class(아무 멤버도 없는 클래스)도 많이 사용됩니다.
class disk_exception {};












void db_remove() { std::cout << "db remove\n"; }

int db_backup()
{
	if (1)  
	{
		file_not_found_exception e("back.txt");
		throw e;
	}

	else if ( 2 )  // 또 다른 이유로 실패
	{
		disk_exception e;
		throw e;
	}

	return 100;
}

int main()
{
	try 
	{
		int ret = db_backup();
	}
	catch(const disk_exception& e)
	{
		std::cout << "disk 예외 발생\n";
	}
	catch(const file_not_found_exception& e)
	{
		std::cout << "file_not_found_exception 예외 발생\n";
	}
	catch( ... ) // 위에서 잡히지 않은 모든 예외를 이곳에서 처리
	{
		std::cout << "알수 없는 예외 발생\n";
	}

	db_remove();
}
