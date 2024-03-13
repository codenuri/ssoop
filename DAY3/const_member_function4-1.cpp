#include <iostream>

class Point
{
	int x;
	int y;

	char cache[32];
	bool cache_valid = false;
public:
	Point( int x, int y) : x{x}, y{y} {}

	char* to_string() const 
	{
		if( cache_valid == false )
		{
			sprintf(cache, "(%d, %d)", x, y);
			cache_valid = true;
		}
		return cache;
	}
};


int main()
{
	Point pt{1,2};
	std::cout << pt.to_string() << std::endl;
	std::cout << pt.to_string() << std::endl;
}


