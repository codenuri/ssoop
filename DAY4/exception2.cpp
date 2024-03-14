#include <iostream>

// 객체지향 언어 에서는 함수가 실패 하면 "예외" 라는 기법으로 처리합니다.

// 1. 함수 가 실패 하면 예외를 던집니다.(throw)

int db_backup()
{
	if (1)  // 실패 라고 가정
		throw 1;	// 예외 전달(throw, 던진다고 표현)

	return 100;
}

void db_remove() {}

int main()
{
	int ret = db_backup();

	db_remove();
}
