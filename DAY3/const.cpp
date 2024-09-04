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