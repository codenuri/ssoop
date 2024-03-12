#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int get_area() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};
int main()
{	
	// #1. 
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // ??


	// #2. 용어
	int n1 = 10; 	// 
	n1 = 20;		

	Rect r = { 1, 1, 10, 10 };	
}
