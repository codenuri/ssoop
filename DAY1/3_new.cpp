
#include <iostream>

// new, delete
// 47 page

int main()
{
	// C 스타일
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ 스타일
	int* p1 = new int;
	delete p1;

	int* p2 = new int[10]; // 배열 형태로 할당
	delete[] p2;           // 주의 배열형태로 할당한 경우는 delete 가 아닌 
							// delete[]

	int* p3 = new int[10];
	delete p3;		// 이렇게 delete 하면 어떻게 되나요 ?
					// => 미정의 동작 발생
					// => undefined 					
	
}

