// sample4.cpp

class Animal {};

class Dog : public Animal 
{
public:
	void set_color(int c) {}
};

void NewYear(Animal* p)
{
	// 새해가 되면 Dog 의 색상도 변경된다고 가정
//	p->set_color(10);	// dynamic type check 라면 컴파일 ok
						// static type check 언어는 컴파일 error

	// 컴파일러에게 p가 실제는 Dog 라고 알려주면 된다.
	static_cast<Dog*>(p)->set_color(10); // ok

	// 단, p가 가리키는 곳이 Dog 가 아니면 잘못된 동작
	// => 조사하는 방법은 내일
}

int main()
{
	Dog d;
	NewYear(&d);
}