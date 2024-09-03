#include <iostream>
#include "vector.h"

int main()
{
	vector<double> v(4, 3.1);

	v.at(0) = 5.4;
	v.resize(8);

	std::cout << v.at(0) << std::endl;
}