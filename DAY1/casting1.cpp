#include <iostream>
// 50 page

int main()
{
	int n = 3;

//	double* p = &n; // error.
	double* p = (double*)&n; // ok
							// C 스타일의 캐스팅은 아주 강력합니다.
							// 대부분 성공합니다.
							// 그런데, 과연 이 코드가 
							// 개발자의 의도 일까요 ? 실수 일까요 ?

	*p = 3.4; // 이순간을 생각해 보세요.

}
