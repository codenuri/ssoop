// sample2.cpp
class Car 
{
public:
	void Go() {}
};
int main()
{
	Car* c = new Car;
	c->Go();   // ok
	c->Stop(); // error. 컴파일 할때 Car 의 선언을 조사해서 확인
	c = 10;    // error.
}