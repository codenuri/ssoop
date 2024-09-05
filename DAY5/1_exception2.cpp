#include <iostream>

// 객체지향 언어의 오류 처리 방식 : 예외

// #1. 함수가 실패하면 "예외를 던집니다.(throw)"
// => 호출자가 던져진 예외를 처리하지 않으면
//    std::terminate() 라는 함수가 호출되고
//    결국 프로세스는 비정상 종료하게 됩니다.

// => 호출자는 반드시 예외를 처리해야 합니다.

int db_backup()
{
	if (1)		// 실패라고 가정
		throw 1;

	return 100;
}
void db_remove() { std::cout << "db_remove\n"; }

int main()
{
	int ret = db_backup();
	
	db_remove();
}
