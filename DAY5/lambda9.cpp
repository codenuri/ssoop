class Plus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
	
	static int helper(int a, int b)
	{
		return a + b;
	}

	using PF = int(*)(int, int);

	// ��ȯ ������ : ��ü�� �ٸ� Ÿ������ ��ȯ�ɶ� �ڵ�ȣ��. 
//	operator PF() { return &Plus::operator(); } // error. 
							// operator() �� ��� �Լ� �̹Ƿ�
							// ���ڰ� 3��. 

	operator PF() { return &Plus::helper; }
};

int main()
{
	int(*f)(int, int) = Plus{};
						// "��ü.operator �Լ�������()" ��� 
						// ��ȯ������ �Լ� �ʿ�

}