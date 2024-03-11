// struct - 25 page

struct Point 
{
	int x = 0; // C++11 부터. 멤버 데이타를 초기화 가능합니다.
	int y = 0; 
};

int main()
{
	struct Point p1;	// C 언어는 struct 필요
	Point p2; 			// C++ 언어는 struct 필요 없음.
}
