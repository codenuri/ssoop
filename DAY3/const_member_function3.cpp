class Car
{
	int speed = 0;
	static int cnt;
public:
	void set_speed(int s) { speed = s;}
//	int get_speed()	      { return speed;}  // 틀린 코드
	int get_speed()	const { return speed;}  // 맞는 코드.

	static int get_count() { return cnt; } // const 붙이면 안됩니다.
							// static 멤버 함수는 객체없이 호출하는 함수
							// const member function 은 객체가 상수인 경우
							// 때문에 사용.
							// static 멤버 함수는 const member function
							// 이 될수 없다.
};
int Car::cnt = 0;


int main()
{
	Car c;
	c.set_speed(100);
	int n = c.get_speed();
}
// C++ 에서 멤버 함수의 종류!!

// 1. non-static member function : 객체를 생성한후 호출 

// 		1-1. non-const member function	: set_speed
//      1-2.     const-member function  : get_speed


// 2. static member function : 객체 없이 호출 가능한 멤버 함수 : get_count()


