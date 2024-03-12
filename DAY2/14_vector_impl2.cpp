#include <iostream>
#include <cstring>   

class vector
{
private:
	int* ptr;
	int  sz;

public:
	vector(int size, int value = 0 )
	{
		ptr = new int[size];

		for( int i = 0; i < size; i++)
			ptr[i] = value;
	}
};

int main()
{
	vector v(4,0);

//	v.resize(8);  

	int n = v.size(); 
}
