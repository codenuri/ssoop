class Test
{
	const int c;
public:
	Test(int k) : c{ k } // ok. const int c = k
	{
	//	c = k; // const int c; �����
			   // c = k �Ѱ�. 
				// error. 
	}			
};

int main()
{
	Test t(5);
}