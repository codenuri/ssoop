#include <iostream>

// 2. 호출자는 예외 가능성이 있는 함수를 호출할때
// => try {} 안에서 호출해야 하고
// => catch 로 던져진 예외를 잡아야 합니다.


// 예외 방식으로 오류를 처리할때 장점
// 1. 반환 값과 오류의 전달이 완전히 분리된다.
// 2. 오류 발생시 호출자는 반드시 오류를 처리해야 한다.
//    처리하지 않으면 프로그램을 계속 실행될수 없다.


void db_remove() { std::cout << "db remove\n"; }

int db_backup()
{
	if (1)  
		throw 1;	
	return 100;
}

int main()
{
	try 
	{
		int ret = db_backup();
	}
	catch(int e)
	{
		std::cout << "예외 발생\n";

		// 여기서 원인을 파악하고, 오류를 수정합니다.
		// 오류를 해결할수 없다면 사용자에게 알리고 프로그램을 종료해야 합니다.
		// std::exit(-1);

		// 여기서 종료하지 않으면 프로그램을 계속 실행됩니다.
	}

	db_remove();
}
