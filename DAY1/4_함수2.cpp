﻿// C++ 함수 특징 2. inline   .. 32page


       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }

// 인라인 함수
// => 함수의 기계어 코드를 호출하는 위치에 치환해달라.
// 의도 : 실제 호출이 아닌 치환이므로 빠르다.

int main()
{
	int n1 = add1(1, 2);	// 1. 인자를 약속된 장소에 넣고			
							// 2. 함수로 이동
							// 32bit		64bit
							// push  2		mov edi, 2
							// push  1		mov sdi, 1
							// call add1	call add1

	int n2 = add2(1, 2);	// add2 의 기계어 코드를
							// 이 위치에 치환해달라.
							// mov eax, 2
							// add eax, 1
							// mov n, eax
}

// 확인하는 법
// godbolt.org 에서
// msvc 컴파일러(visual studio 컴파일러) 선택후, -Ob1 옵션 적용

// -O2 : 속도를 위한 모든 최적화 해달라는 것
// -Ob1 : 인라인 치환만 해달라(VS 전용, g++ 안됨)
