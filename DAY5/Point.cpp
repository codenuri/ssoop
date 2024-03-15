// Point.cpp
#include "Point.h"

Point::Point(int a, int b) : x{a}, y{b}
{

}
Point::~Point() 
{
	
}

void Point::set(int a, int b)	
{						
	x = a;				
	y = b;				
}
