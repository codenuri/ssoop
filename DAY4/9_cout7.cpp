#include <stdio.h>

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d", n);         return *this; }
		ostream& operator<<(double d) { printf("%f", d);      return *this; }
		ostream& operator<<(const char* s) { printf("%s", s); return *this; }
		ostream& operator<<(ostream& (*f)(ostream&))
		{
			f(*this); 
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
	std::cout << "A" << tab << "B" << std::endl;
}


