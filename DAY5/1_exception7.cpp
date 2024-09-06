#include <vector>
#include <iostream>

// C++ 표준 라이브러리는 예외를 많이 사용하지는 않지만
// 일부 함수에서 예외가 발생합니다.

int main()
{
	std::vector<int> v(3);

	// at : if 문으로 index 조사후 잘못된 경우 예외 발생
	// [] : 전달된 index 를 그대로 사용 - 빠르게 동작!!
	//	   => index 가 안전하다면 at 보다 [] 가 좋다

	try
	{
//		v.at(10) = 0; // 잘못된 인덱스 사용시 예외 발생
		v[10] = 0;	  // 잘못된 인덱스 사용시 잘못된 메모리참조!
	}
	catch (std::out_of_range& e)
	{
		std::cout << "잘못된 index 사용\n";
	}

	for (int i = 0; i < v.size(); i++)
	{
		v[i] = 0;
	}
}
