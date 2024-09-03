class Point
{
	int x, y;
public:
	void set(int a, int b) {}
};

void foo(int a, int b) {}

int main()
{
	void(*f1)(int, int) = &foo;			// ok
	void(*f2)(int, int) = &Point::set;	// ?
}