
// Car.h
class Car
{
public:
	static int cnt;		// non- const static
						// => �ҽ��� ���� �ʿ��ϰ�
						// => �ʱ�ȭ�� ���Ǻο���

	static const int cnt2 = 0;	// static const
								// �ҽ��� ���Ǻ� �ʿ� �����ϴ�.
								// �ʱ�ȭ�� ���⿡�� 
};

extern int x; // ���������� ���� ����.
const int c = 0; // const ���������� ����� ����.


// Car.cpp
int Car::cnt = 0;

int x = 0; // �Ϲ���������