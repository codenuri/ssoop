#include <iostream>
//#include "vector.h"
#include <vector> // 이미 C++ 표준에 vector 있습니다.

int main()
{
//	vector<double> v(4, 3.1);
	std::vector<double> v(4, 3.1); // C++ 표준 vector
									// 위 코드와 유사하지만
									// 훨씬 효율적이고 복잡하게 설계됨.

	v.at(0) = 5.4;
	v.resize(8);

	std::cout << v.at(0) << std::endl;
}