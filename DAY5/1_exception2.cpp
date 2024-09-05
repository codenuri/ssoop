#include <iostream>

// 객체지향 언어의 오류 처리 방식 : 예외

// #1. 함수가 실패하면 "예외를 던집니다.(throw)"

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
