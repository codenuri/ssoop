// 59 page
int main()
{
	int n = 0;

	// 1. & 연산자 헷갈리지 마세요
	int* p1 = &n;	// 변수앞에 & 는 변수의 주소를 구할때 사용
	int& r1 = n;	// 변수 선언시 & 는 reference 를 만드는 연산자!!

	// 2. 포인터 변수는 &n 로 초기화 레퍼런스는 n 로 초기화

	// 3. 요소 접근시 포인터는 * 사용, 레퍼런스는 그냥 이름 사용
	*p1 = 10;
	r1 = 10; // * 사용안함.

	// 4. 포인터는 초기값이 없어도 되지만(또는 0으로 초기화 가능하지만)
	//    레퍼런스는 반드시 초기값 필요
	int* p2 = 0; // 또는 nullptr
	int* p3;

	int& r3; // error. 반드시 초기값 필요

	// reference 는 반드시 초기화 되어야 하므로
	// 항상(거의) 안전합니다.	
}