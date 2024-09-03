// 상수 멤버 함수는 선택이 아닌 "필수 문법" 입니다.

// => 객체의 상태를 변경하지 않은(멤버 데이타를 수정하지 않은)
//    모든 멤버 함수(소위, getter 라 불리는 모든 멤버 함수)
//    "반드시" const member function 으로 해야 합니다.

// 아래 코드에서 "getArea()"에 const 붙이지 않으면 "잘못된(틀린)" 
// 코드 입니다.


class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x{a}, y{b}, w{c}, h{d} {}

	int getArea() const { return w * h; }

};

//void foo(Rect r) // call by value : 복사본에 대한 overhead!!!	   
void foo(const Rect& r) // 반드시 이렇게 해야 합니다.
{
	int n = r.getArea();  	// ???
}

int main()
{
	Rect r(1, 1, 10, 10);	// 상수객체 아님. 
	int n = r.getArea();	// ok

	foo(r);	//
}



