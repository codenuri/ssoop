#include <iostream>

// 던져진 예외를 받는 방법 : try ~ catch

int db_backup()
{
	if (1)		
		throw 1;

	return 100;
}
void db_remove() { std::cout << "db_remove\n"; }

int main()
{
	// #1. 예외 가능성이 있는 함수를 호출할때는 try{} 안에서 호출
	try
	{
		int ret = db_backup();
	}
	catch (int e)
	{
		std::cout << "예외발생\n";
		// 여기서 발생된 예외를 조사해서 해결할수 없으면
		// 사용자에게 알리고 프로세스 종료
		// std::exit(-1);

		// 그렇지 않으면 프로그램을 계속 실행가능
	}


	db_remove();
}
