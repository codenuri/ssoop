// 상수 멤버 함수는 "선택" 이 아닌 "필수" 문법 입니다.

// 객체의 상태를 변경하지 않은 모든 멤버 함수(get_xxx 등의 getter) 는
// 반드시 상수 멤버 함수가 되어야 합니다.

//vector<int> v(10,3);
//int n = v.size();  // size() 같은 멤버 함수는 반드시 const member function
					// 으로 해야 합니다.


class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x{a}, y{b}, w{c}, h{d} {}

	int getArea() const { return w * h; }

};

// void foo(Rect r)	   // call by value : 복사본 오버헤드 있습니다.
void foo( const Rect& r) // 좋은 코드!
{
	int n = r.getArea();  	// ???
}

int main()
{
	Rect r(1, 1, 10, 10);	//  상수 객체 아님.

	int n = r.getArea();	// ok.. 

	foo(r);	//
}



