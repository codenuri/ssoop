// const.cpp
class Sample
{
	int data = 0;
public:
	int  get1() { return data; }
	int& get2() { return data; }
};

int main()
{
	Sample s;
	s.get1() = 10;
	s.get2() = 10;
}