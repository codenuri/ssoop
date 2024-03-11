template<typename T> 
T square1(T a)
{
	return a * a;
}

// typename 대신 class 사용해도 됩니다 - C++98 시절부터 모두 가능
template<class T> 
T square2(T a)
{
	return a * a;
}

// C++20 부터 템플릿을 아주 쉽게 만들수 있게 되었습니다.
auto square3(auto a) 
{
	return a * a;
}

int main()
{
	square1(3);
	square2(3);
	square3(3);
}
