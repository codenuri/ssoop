#include <iostream>
#include <cstring>   

// vector4.cpp 코드 처럼
// => 동적 할당된 버퍼(메모리)를 계속 키워가면서 사용하는 기술을
// => "동적배열" 또는 "vector" 라고 부릅니다.
// => C 언어에서 아주 널리 사용되는 기술 입니다.
// => C 는 데이타와 함수가 분리되어서, vector4.cpp 코드를 재사용 가능하게 만들기 어렵습니다.

// 객체지향 프로그래밍 : 필요한 타입을 먼저 만들자!!!
// => 동적 배열이 필요 하면 "vector" 라는 타입을 만들자!!
// => Person, Rect, Date 같은 것만 만드는 것이 아니라, 자료구조도 타입으로 설계

class vector
{

};

int main()
{
	vector v(4,0); // 4개를 0으로 초기화한 동적 배열
	v.resize(8);   // 8개로 키우기
	int n = v.size(); // 8
}
