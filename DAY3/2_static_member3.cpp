#include <iostream>


// 방법 3. static 멤버 데이타

// 1. 멤버 데이타 앞에 static 을 붙이는 멤버
// 2. 반드시 클래스 외부에 정의 되어야 합니다.

// 특징.
// 1. 객체가 한개도 없어도 static 멤버 데이타는 메모리에 놓이게 됩니다.
//    (수명은 전역변수와 완전히 동일)

// 2. 객체 생성시, static 멤버데이타는 객체 메모리에는 포함되지 않습니다
// 
// 3. static 멤버 데이타는 객체이름 또는 클래스 이름으로 접근 가능합니다


// 결국, static 멤버 데이타는 "접근지정자" 를 사용할수 있는
// 전역변수와 유사합니다.


class Car
{
	int color = 0;
public:
//	int cnt = 0;		// 객체당 한개의 멤버
	static int cnt; 	// static 멤버 데이타. 모든 객체가 공유

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static 멤버 데이타는 클래스 외부에서 반드시 정의 되어야 합니다.
int Car::cnt = 0; // 초기값 지정도 이 위치에서


int main()
{
	std::cout << Car::cnt << std::endl;


	Car c1;
	Car c2;
	
	// static 멤버 데이타 접근시
	// 1. 객체이름.static멤버
	// 2. 클래스이름::static멤버
	// 로접근 가능합니다.
	// => 그런데, "클래스이름" 사용을 권장합니다.
	// => 객체이름 사용시, static 인지 non-static 인지 구별 안됨.

	// => java, C# 등의 대부분의 객체지향 언어는
	//   "클래스이름" 으로만 접근 가능합니다.
	//   "객체이름" 으로 접근 안됨. 

	std::cout << c1.cnt << std::endl; 
	std::cout << Car::cnt << std::endl;

}
