// const.cpp
class Sample
{
	int data = 0;
public:
	int  get1() { return data; } // "0" 반환
	int& get2() { return data; } // "data 별명 반환"

	// const 가 함수 앞에 붙으면 "반환값이 const" 라는 것!!
	const int& get3() { return data; } // data 의 별명을 상수참조로 반환

	const int& get4() const { return data; }
};

int main()
{
	Sample s;
	s.get1() = 10; // error. "0 = 10" 의 의미
	s.get2() = 10; // ok.    "data별명 = 10" 
	s.get3() = 10; // error. "data별명=10" 인데, 별명이 상수

	int* p1 = &(s.get1()); // error. "0" 의 주소는 구할수 없다.
	const int* p2 = &(s.get3()); // ok. 상수 별명이라도 주소 구할수 있다.

	const Sample cs;
	cs.get3(); // error. 상수 객체는 상수 멤버 함수만 호출가능.
	cs.get4(); // ok. 상수 멤버 함수 이므로
}

int main()
{
	int n = 0;

	// 아래 코드가 헷갈리면
	// => * 를 찾으세요
	// => * 기준 const 가 어디로 묶이는지 생각하세요
	const int* p1 = &n;	// p1 자체는 상수아님. p1을 따라간곳을 상수 취급
						// ( n 은 상수 아니지만, p1 을 통해서는 상수처럼사용하게)
	
	int* const p2 = &n;	// p2자체가 상수, p2 를 따라간 곳은 상수 아님

	*p1 = 10; // error. p1이 가리키는 곳이 const 
	*p2 = 10; // ok. p2는 상수지만, p2가 가리키는 곳은 상수 아닌

	
	// 질문 아래 코드는 어디가 상수 일까요 ?
	int const* p3 = &n; // 이코드는 아래 코드와 동일.
	const int* p1 = &n; // 즉, const 와 타입의 위치는 변경가능
}