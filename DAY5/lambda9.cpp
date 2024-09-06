class Plus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
	
	static int helper(int a, int b)
	{
		return a + b;
	}

	using PF = int(*)(int, int);

	// 변환 연산자 : 객체가 다른 타입으로 변환될때 자동호출. 
//	operator PF() { return &Plus::operator(); } // error. 
							// operator() 는 멤버 함수 이므로
							// 인자가 3개. 

	operator PF() { return &Plus::helper; }
};

int main()
{
	int(*f)(int, int) = Plus{};
						// "객체.operator 함수포인터()" 라는 
						// 변환연산자 함수 필요

}