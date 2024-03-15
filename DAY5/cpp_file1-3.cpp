#include <iostream>

// Point.h    : 클래스 선언부
// Point.cpp  : 멤버 함수 구현부

// Point 클래스 사용하려면

// 1. 아래처럼 헤더 포함
#include "Point.h"

// 2. 빌드시는 아래 처럼
// g++ cpp_file1-3.cpp  Point.cpp   



int main()
{
	Point p1{1,2};
	p1.set(10, 20); 
}
