// 1_레퍼런스3. 
struct Rect
{
	int x;
	int y;
	int width;
	int height;
};

void foo(Rect rc) { } // call by value. 복사본에 대한 오버헤드 있습니다.
void foo(Rect& rc)  // call by reference. 복사본 없음
{
	rc.x = 100; // 이렇게 하면 원본 수정됨.
}

// 복사본 없이, 원본을 수정하지 않고 받으려면
// const Rect&
void foo(const Rect& rc)
{
	rc.x = 100; // error. 즉, 이 안에서는 읽기만 하겠다는 의도
}

int main()
{
	Rect rc = { 10, 10, 100, 100 };

	foo(rc);
}
