// explicit1.cpp
class vector
{
public:
	// explicit ������ : direct initialization �� �����ϰ�
	//					copy initialization �� ����Ҽ� ����.
	explicit vector(int sz) {}
};

void foo(vector v) {}

int main()
{
	// #1. ���ڰ� �Ѱ��� �����ڰ� ������
	// �Ʒ��� ���� 4���� ���·� ��ü�� ����� �ֽ��ϴ�.
	vector v1(10);		// C++98. direct initialization
	vector v2 = 10;		// C++98. copy   initialization
	vector v3{ 10 };	// C++11. direct initialization
	vector v4 = { 10 }; // C++11. copy   initialization
	
	foo(10); // �Լ��� ���� ������ "copy initialization"
			 // "vector v = 10" �� �ڵ� �Դϴ�.
}