// 1_constexpr3.cpp

int fact1(int n)
{
	if (n == 1) return 1;
	return n * fact1(n - 1);
}

constexpr int fact2(int n)
{
	if (n == 1) return 1;
	return n * fact2(n - 1);
}


int main()
{
	int n1 = fact1(5);
	int n2 = fact2(5);
}