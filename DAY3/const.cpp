// const.cpp
class Sample
{
	int data = 0;
public:
	int  get1() { return data; } // "0" ��ȯ
	int& get2() { return data; } // "data ���� ��ȯ"

	// const �� �Լ� �տ� ������ "��ȯ���� const" ��� ��!!
	const int& get3() { return data; } // data �� ������ ��������� ��ȯ

	const int& get4() const { return data; }
};

int main()
{
	Sample s;
	s.get1() = 10; // error. "0 = 10" �� �ǹ�
	s.get2() = 10; // ok.    "data���� = 10" 
	s.get3() = 10; // error. "data����=10" �ε�, ������ ���

	int* p1 = &(s.get1()); // error. "0" �� �ּҴ� ���Ҽ� ����.
	const int* p2 = &(s.get3()); // ok. ��� �����̶� �ּ� ���Ҽ� �ִ�.

	const Sample cs;
	cs.get3(); // error. ��� ��ü�� ��� ��� �Լ��� ȣ�Ⱑ��.
	cs.get4(); // ok. ��� ��� �Լ� �̹Ƿ�
}