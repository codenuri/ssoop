// using alias
// 30 page

//typedef int DWORD;
//typedef void(*PF)();	// 함수 포인터 타입 만들기

// C++11 부터는 typedef 대신 using 사용하면 됩니다.
// 아래 2줄이 위 코드와 완전히 동일합니다.
using DWORD = int;
using PF = void(*)();


// typedef : 타입에 대한 별명 만 만들수 있습니다
// using   : 타입에 대한 별명 + template 의 별명(이 기능 때문에 만든것) 


int main()
{
	DWORD n; // int n
	PF    f; 
}

