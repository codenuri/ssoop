#include <stdio.h>

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d", n);         return *this; }
		ostream& operator<<(double d) { printf("%f", d);      return *this; }
		ostream& operator<<(const char* s) { printf("%s", s); return *this; }
	
		ostream& operator<<( ostream&(*f)(ostream& ) ) 
		{ 
			f(*this); // std::endl( std::cout )
					  // �ᱹ endl �� ȣ���Ѱ�
			return *this; 
		}
	
	};

	ostream cout;


	std::ostream& endl(std::ostream& os)
	{
		os << "\n";
		return os;
	}
}

int main()
{
	std::cout << std::endl; // endl �� ��ü�� �Լ� �Դϴ�.
							// char* endl = "\n" �� �ƴմϴ�.
							
							// cout.operator<<(endl)
							// cout.operator<<(�Լ�������)

	std::endl( std::cout );   // �� �ڵ�� ���ڵ�� �����մϴ�.
}

