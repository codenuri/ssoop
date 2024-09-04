#include <iostream>

// 선언과 구현의 분리 - 120 page

// #1. static 멤버 함수는 "선언에만 static" 을 표기해야 합니다.
// => 구현에도 "static" 붙이면 C언어의 "static 함수" 와 문법 충돌
// => C언어 static 함수 학습해 보세요

// #2. static 멤버 변수의 외부 선언은 소스(car.cpp) 에 있어야 합니다.
// => (C 에서 전역변수는 헤더가 아닌 소스에 만들어서 사용해야 합니다.)
// => 아래 코드 참고하세요

// Car.h
class Car
{
	int color = 0;
	static int cnt;
public:
	Car();
	~Car();
	static int get_count();
};

// Car.cpp
#include "Car.h"

int Car::cnt = 0;

Car::Car() { ++cnt; }
Car::~Car() { --cnt; }
int Car::get_count() { return cnt; }


int main()
{

}

