// inline function
// 36page

       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }

int main()
{
	int n1 = add1(1, 2);  // 인자 2개를 약속된 장소(레지스터)에 넣고
						  // 함수로 이동
						  // mov esi, 2
						  // mov edi, 1
						  // call add1

	int n2 = add2(1, 2);  // add2 함수로 이동하는 것이 아니라
						  // add2의 기계어 코드를 이 위치에 치환
						  // mov eax, 2
						  // add eax, 1
						  // mov n2, eax
	// 인라인 함수 
	// 장점 : 빠르다. 
	// 단점 : 크기가 큰 함수를 여러번 치환하면 실행파일 크기 증가.
}
