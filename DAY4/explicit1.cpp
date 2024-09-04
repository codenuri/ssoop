// explicit1.cpp
class vector
{
public:
	vector(int sz) {}
};

int main()
{
	// 인자가 한개인 생성자가 있으면
	// 아래와 같이 4가지 형태로 객체를 만들수 있습니다.
	vector v1(10);
	vector v2 = 10;
	vector v3{ 10 };
	vector v4 = { 10 };
}