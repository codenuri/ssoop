// 67page
#include <iostream>

// �Ʒ� �ڵ尡 ������ ���̴� ����

// => �簢�� �� �ٷ��� �ϴµ�..
// => "Rect" Ÿ���� �����Ƿ� "int 4��"�� �簢���� ǥ���ϱ� ������..

// => ����ü �������� "Rect" �� ���� ����� ��� ??

// �簢���� ������ ���ϴ� �Լ�
int get_rect_area(int left, int top, int right, int bottom)
{
	return (right - left) * (bottom - top);
}

// �簢���� �׸��� �Լ�
void draw_rect(int left, int top, int right, int bottom)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	int n1 = get_rect_area(1, 1, 10, 10);
	draw_rect(1, 1, 10, 10);
}