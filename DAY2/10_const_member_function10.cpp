#include <iostream>
#include <string>

class Point
{
	int x, y;
	
	// mutable ��� ����Ÿ
	// => ��� ��� �Լ������� "���� �����Ҽ� �ֵ��� �ش޶�"
	// => to_string() ó��, ���������δ� "��� ��� �Լ�" �� ������
	// => �پ��� ��ũ�л� ����� ������ �ʿ��� ��� ���. 
	mutable char cache[32];
	mutable bool valid = false;
public:
	Point(int a, int b) : x{ a }, y{ b } {}

	// ��ü�� ���¸� ���ڿ��� ��ȯ�ϴ� �Լ�
	// => C#, Java ���� �θ� ���Ǵ� �Լ�
	// => ��ü�� ���¸� �б⸸ �ϹǷ� "const member function" �̾�� �մϴ�.
	const char* to_string() const 
	{
		if (valid == false)
		{
			sprintf(cache, "x = %d, y = %d", x, y);
			valid = true;
		}

		return cache;
	}
};
int main()
{
	Point pt(1, 2);

	std::cout << pt.to_string() << std::endl;
	std::cout << pt.to_string() << std::endl;
}