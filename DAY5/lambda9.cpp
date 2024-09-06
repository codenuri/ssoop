class Plus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	int(*f)(int, int) = Plus{};

}