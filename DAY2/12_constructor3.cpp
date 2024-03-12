// 5_생성자3 - 78page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 생성자
	// 1. 클래스 이름과 동일한 멤버 함수
	// 2. 리턴 타입을 표기하지 않고, 리턴할수도 없다
	// 3. 인자는 있어도 되고, 없어도된다, 여러개 만들수 있다.
	// 
	// 4. 객체를 생성하면 항상 생성자가 호출된다.
	// 
	// 5. 사용자가 생성자를 한개도 만들지 않으면
	//    컴파일러가 인자 없는 생성자(디폴트 생성자) 를 제공한다. 
	// 
	Point()             { x=0; y=0; std::cout << "Point()"         << std::endl; } // 1
	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; } // 2
};

int main()
{
	// #1
	Point p1;			
	Point p2(1, 2);		


	// #2. C++11 부터 {} 초기화 가능합니다.
	Point p3{ 1,2 };		
	Point p4 = { 1,2 };		




	// #3. 객체의 갯수만큼 생성자가 호출됩니다.
	Point arr1[5];						// 인자 없는 생성자 5회 호출					
	Point arr2[5] = { {1,2},{2,3} };	// 인자 2개인 생성자 2회
										// 인자 없는 생성자 3회. 

	// #4.
	Point* p; 	// Point 객체를 만든것이 아니라
				// 주소를 담는 포인터 변수 만든것
				// 생성자 호출 안됨			

	p = (Point*)malloc( sizeof(Point) ); // Point 객체를 만들라는 의미가 아니라
										 // 8 바이트 메모리 할당하고
										 // 그 주소를 Point 처럼 생각하겠다는의미
										// 생성자 호출 안됨.	
	
	free(p);	// 소멸자 호출 안됨.

	p = new Point;	// Point 객체 한개를 힙에 생성해 달라는 것.
					// 생성자 호출됨.
	delete p;		// 소멸자 호출.

	p = new Point(1, 1);	// 인자가 2개인 생성자 호출
	delete p;

}