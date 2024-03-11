// function template
// 39 page

/*
int square(int a)
{
	return a * a;
}

double square(double a)
{
	return a * a;
}
*/

// 함수의 구현이 동일(유사)한 함수가 여러가 필요 하면
// => 함수를 직접 만들지 말고
// => 함수를 만드는 틀(template) 을 제공하면 됩니다.

template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
	// #1. 타입인자를 명시적으로 전달하는 코드
	square<int>(3);		// 1. square 틀을 사용해서 square<int>(int) 함수 생성
						// 2. 그리고 이 부분은 "call square<int>" 로 컴파일
	square<double>(3.4);// square<double>() 함수 생성
}
