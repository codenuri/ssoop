// 26 page
struct Point
{
	int x, y;
};
int main()
{
	// 중요한 변화.!
	int n1 = 10;
	int x1[3] = { 1,2,3 };
	Point p1 = { 1,2 };

	// 일관된 초기화(uniform initialization). C++11 부터 지원
	// => 모든 종류의 변수는 한가지(일관된) 방법으로 초기화 가능하다.
	// => 중괄호 초기화(brace init) 이라고도 합니다.

	int n2 = {10};
	int x2[3] = { 1,2,3 };
	Point p2 = { 1,2 };

	int n3 {10};
	int x3[3] { 1,2,3 };
	Point p3 { 1,2 };

	// direct(직접) initialization : = 이 없는 초기화
	// copy(복사)   initialization : = 이 있는 초기화
	// => 생성자를 만들면 차이점이 있지만, 생성자가 없을때는 동일합니다
	//---------------------------------------

	int a1 = 3.4; 	// ok. 하지만 나쁜 코드
					// C#, Java 등 대부분의 다른 언어는 컴파일 에러!!

	int a2 = {3.4}; // error. 중괄화 초기화는 데이타 손실 발생시에러
	int a3{3.4};    // error

	char c1 = {500}; // error. 500을 1byte 에 담을수 없다.				

}



