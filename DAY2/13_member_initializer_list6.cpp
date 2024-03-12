class Point
{
	// C++11 부터는 멤버 데이타(필드)도 직접 초기화 가능합니다.
	int x = 0;
	int y{0}; // {} 도 가능
public:
	Point() {}
	Point(int a) : y(a) {}
};


int main()
{

}