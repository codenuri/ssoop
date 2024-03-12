#include <iostream>
// 사용자가 -1을 입력할때 까지 계속 입력 받고 싶다.

int main()
{
	int n = 0;

//	int buff[4];	// 이렇게 지역변수로 만들면 필요없을때 제거 할수 없습니다.

	int size = 0;
	int* buff = new int[size];
	
	int cnt = 0;

	while( 1 )
	{
		std::cin >> n;

		if ( n == 1 ) break;

		buff[cnt++] = n;

	}
	
}