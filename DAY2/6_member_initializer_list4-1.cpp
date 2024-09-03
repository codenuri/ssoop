class Test
{
	const int c;
public:
	Test(int k) : c{ k } // ok. const int c = k
	{
	//	c = k; // const int c; 만들고
			   // c = k 한것. 
				// error. 
	}			
};

int main()
{
	Test t(5);
}
