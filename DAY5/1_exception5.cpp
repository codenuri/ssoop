// 1_exception5

void goo()
{
	// 여기서 실패 했다
	// 반환값으로 알려주는 경우 : foo 을 거쳐서 main 에 알려야 합니다.
	// 예외는 한번에 전달도 가능합니다.
	throw 1; // 이순간 main 의 catch 로 바로 이동
			 // => 장점으로 보는 시각도 있고
			 // => 단점으로 보는 시작도 있습니다.
			 // 구글 C++ style guide : 예외 사용하지 말라
			 // MS  C++ style guide : 예외 사용해라
}
void foo()
{
	goo();
}
int main()
{
	try
	{
		foo();
	}
	catch (int e) {}
}