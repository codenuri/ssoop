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
					  // 결국 endl 을 호출한것
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
	std::cout << std::endl; // endl 의 정체는 함수 입니다.
							// char* endl = "\n" 가 아닙니다.
							
							// cout.operator<<(endl)
							// cout.operator<<(함수포인터)

	std::endl( std::cout );   // 위 코드는 이코드와 동일합니다.
}


