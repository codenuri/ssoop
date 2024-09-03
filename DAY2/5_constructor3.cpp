// 5_생성자3 - 78page ~
#include <iostream>

// 생성자 정리 - 81 page

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
	// 4. 객체를 생성하면 항상(반드시) 생성자가 호출된다.
	// 
	// 5. 사용자가 생성자를 한개도 만들지 않으면
	//    컴파일러가 인자 없는 생성자를 제공한다. (디폴트 생성자)
	// 
	// 6. 멤버 데이타를 초기화 할때는 "초기화 리스트"가 좋다.
	// 
	Point()             : x{ 0 }, y{ 0 } { std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) : x{ a }, y{ b } { std::cout << "Point(int, int)" << std::endl; } // 2
};

int main()
{
	// #1
	Point p1;			
	Point p2(1, 2);		

	// #2. C++11 부터 {} 초기화 가능합니다.
	Point p3{ 1,2 };	// direct initialization
	Point p4 = { 1,2 };	// copy initialization	


	// #3. 객체의 갯수만큼 생성자가 호출됩니다.
	Point arr1[5];					// 인자 없는 생성자 5회 호출				
	Point arr2[5] = { {1,2},{2,3} };// 인자 2개 생성자 2회 호출
									// 인자 없는 생성자 3회 호출


	// #4.
	Point* p;		// 객체 생성아님. 생성자 호출 안됨.	

	p = (Point*)malloc( sizeof(Point) ); // 8 바이트 메모리 할당
										 // 생성자 호출 안됨. 
	free(p);	// 메모리 해지, 소멸자 호출 안됨. 			


	p = new Point;  // 8바이트 메모리 할당후, 생성자 호출(인자 없는)
	delete p;		// 소멸자가 있으면 호출하고, 메모리 해지 

//	p = new Point(1, 1); // 인자 2개 생성자
	p = new Point{ 1, 1 }; // {} 도 가능. 
	delete p;

}