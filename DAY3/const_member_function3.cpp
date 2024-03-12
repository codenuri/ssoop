class Car
{
	int speed = 0;
	static int cnt;
public:
	void set_speed(int s) { speed = s;}
//	int get_speed()	      { return speed;}  // 틀린 코드
	int get_speed()	const { return speed;}  // 맞는 코드.

	static int get_count() { return cnt; } // ??
};
int Car::cnt = 0;


int main()
{
	Car c;
	c.set_speed(100);
	int n = c.get_speed();
}