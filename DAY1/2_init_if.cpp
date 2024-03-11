// init control statement
// 45page

int foo() { return 10;}

int main()
{
	int ret = foo();
	if ( ret == 10 )
	{
	}

	// C++17 부터 위 코드를 아래처럼 간단하게 만들수 있습니다.

	if ( int ret2 = foo(); ret2 == 10 ) 
	{

	}	// <= 이 위치에서 ret2 파괴.

	// switch 도 가능
	switch( int n = foo(); n)
	{
		case 1: break;

	}

	// while 도 될까요 ? -안됩니다. 만들필요가 없었습니다.
	//					"for" 가 이미 있습니다.
	while( int cnt = 10; cnt > 0)
	{
		--cnt; // ??
	}
}