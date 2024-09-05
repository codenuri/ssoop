void draw_pixel(int x, int y) {}

int main()
{
	// 1, 2 위치에 점을 그리고 싶습니다. 
	// 다음중 좋은 코드는  ?

	// #1. 함수 인자로 literal 을 전달 => 당연히 이 코드가 좋습니다
	draw_pixel(1, 2);

	// #2. 변수를 만들어서 함수 인자로 전달
	int x = 1;
	int y = 2;
	draw_pixel(x, y);


}





