#include <iostream>

class Point
{
public:
	~Point() { std::cout << "Point\n"; }
};

void goo()
{
	Point p2;
	throw 1; 
}
void foo()
{
	Point p2;
	goo();
}
int main()
{
	try
	{
		foo();
	}
	catch (int e) {}
}