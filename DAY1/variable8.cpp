// structural binding declaration
// 31 page

struct Point
{
	int x, y;
};
int main()
{
	Point pt = { 1,2 };

	int x = pt.x;
	int y = pt.y;

	// pt 의 모든 멤버값을 아래 처럼 한줄로 꺼낼수 있습니다.
	// C++17 : structural binding 이라는 문법
	auto[a1, a2] = pt;	// auto a1 = pt.x;
						// auto a2 = pt.y;

	int [a3, a4] = pt; // error. auto 만 가능.
	auto[a5, a6, a7] = pt; // error. 갯수 다름.

	// 배열도 가능합니다.
	int x[3] = {1,2,3};
	auto [b1, b2, b3] = x; // ok
//	auto [b1, _, b3] = x; // C# 은 필요 없음을 나타내는 _ 도 가능
}
