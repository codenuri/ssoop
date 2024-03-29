#include <iostream>

// 객체지향 언어 에서는 함수가 실패 하면 "예외" 라는 기법으로 처리합니다.

// 1. 함수 가 실패 하면 예외를 던집니다.(throw)
// => 호출자가 던져진 예외를 잡지(catch) 하지 않으면 프로그램은 비정상 종료됩니다.
int db_backup()
{
	if (1)  // 실패 라고 가정
		throw 1;	// 예외 전달(throw, 던진다고 표현)
	return 100;
}
void db_remove() { std::cout << "db remove\n"; }

int main()
{
	int ret = db_backup();

	db_remove();
}
