// 6_member_initializer_list5.cpp
#include <iostream>

// C++11 ���ʹ� ��� ������(�ʵ�)�� ���� �ʱ�ȭ �Ҽ� �ֽ��ϴ�. - 92p
// => field initialization

class Point
{
	int x = 0;
	int y = 0;
public:
	Point() {}
	Point(int b) : y{ b } {}
};
// �� �ڵ带 �����Ϸ��� �Ʒ� ó�� �����մϴ�.
class Point
{
	int x;// = 0;
	int y;// = 0;
public:
	// �� �ʱⰪ�� ������, ����ڰ� ���� �����ڸ�
	// �Ʒ� ó�� �����մϴ�.
	Point()      : x{ 0 }, y{ 0 } {}
	Point(int b) : x{ 0 }, y{ b } {}
};


int main()
{
	Point p;
}