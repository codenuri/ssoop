class Car
{
	int speed;
public:
	void set_speed(int s) { speed = s;}
	int get_speed()	      { return speed;}
};

int main()
{
	Car c;
	c.set_speed(100);
	int n = c.get_speed();
}