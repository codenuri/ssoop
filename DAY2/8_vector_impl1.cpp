#include <iostream>

// 객체지향 프로그래밍 : 프로그램에서 필요한 타입을 먼저 설계해라!!

// => Rect, Point, Person 같은 타입뿐 아니라
// => vector, list, tree 같은 자료구조도 타입화 하면 편리합니다.

// 동적배열(vector) 를 타입으로 설계해 봅시다.

class vector
{

};

int main()
{
	vector v(4, 3);  // 4개를 3으로
	std::cout << v.at(0) << std::endl; // 3

	v.resize(8); // 8 개로 키우기, 
}