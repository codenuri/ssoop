#include <iostream>
#include <cstring>  
#include <vector>

int main()
{
	int n = 0;
	std::vector<int> v;	// 크기가 자동 증가하는 동적 배열

	while( 1 )
	{
		std::cin >> n;

		if ( n == -1 ) break;

		v.push_back(n);
	}
	
	std::cout << "할당된 버퍼 크기 : " << v.capacity() << std::endl;
	std::cout << "입력된 정수 갯수 : " << v.size()     << std::endl;
}
