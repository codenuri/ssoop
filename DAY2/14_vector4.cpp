#include <iostream>
#include <cstring>   // memcpy() 를 위한 헤더
// 사용자가 -1을 입력할때 까지 계속 입력 받고 싶다.

int main()
{
	int n = 0;

//	int buff[4];	// 이렇게 지역변수로 만들면 필요없을때 제거 할수 없습니다.

	int size = 4;
	int* buff = new int[size];

	int cnt = 0;

	while( 1 )
	{
		std::cin >> n;

		if ( n == 1 ) break;

		buff[cnt++] = n;

		if ( cnt == size )
		{
			// 아래 코드가 이 예제의 핵심 입니다.
			// => 복습할때 메모리 그림을 생각(그리면서)하면서 코드를 보세요

			// 1. 큰 버퍼 할당
			int* tmp = new int[size * 2];

			// 2. 작은 버퍼 => 큰버퍼로 복사
			// buff 가 가리키는 메모리 내용을
			// tmp 가 가리키는 메모리에 복사
			memcpy(tmp, buff, sizeof(int)* size);


			// 3. 작은 버퍼 제거
			delete[] buff; 	// buff 를 제거하는 것이 아니라!!!
							// buff 가 가리키는 메모리는 제거하는 것

			// 4. buff 가 새로운 버퍼(메모리)를 가리키도록 변경
			buff = tmp;

			// 5. size 변수 변경
			size = size * 2;

			// tmp 는 {} 안에서 만든 변수 이므로 현재 블럭 벗어나면 자동 파괴
		}
	}
	
	std::cout << "할당된 버퍼 크기 : " << size << std::endl;
	std::cout << "입력된 정수 갯수 : " << cnt  << std::endl;

	// 최종적으로 사용중인 버퍼제거
	delete[] buff;
}
// 실행해서 9개 쯤 입력한후 -1 을 입력해 보세요