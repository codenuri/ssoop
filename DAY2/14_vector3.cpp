#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "학생수를 입력하세요 >> ";
	std::cin >> cnt;

	// 입력된 학생수 만큼, 다시 점수를 입력 받아야 한다.
//	int score[cnt]; // g++ 은 ok..
					// 하지만, visual studio 같은 일부 컴파일러는 error

	// 실행시간에 결정된 크기 만큼의 메모리를 할당하고 싶다.
	// => C/C++ 에서는 동적 메모리 할당 밖에 없다.(malloc 또는 new)
	// => Python 의 list([1,2,3]) 같은 도구가 없나요 ???
	// => list 같은 것은 아래 같은 개념으로 만든것
	int* p = new int[cnt];

	// 포인터는 배열처럼 사용가능하므로 p를 배열 처럼사용하면 됩니다
	for( int i = 0; i < cnt; i++)
		std::cin >> p[i];

	// 동적할당한 메모리는 사용후에는 반드시 제거해야 합니다.
	delete[] p;
	
}