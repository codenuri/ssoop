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
	p->set_color(10);
}
int main()
{
	Dog d;
	NewYear(&d);
}