// lambda7.cpp

// �ٽ� : �������� ĸ���� ������ ����

int main()
{
	int k = 0;

	auto f1 = [k] ()         { k = 10; }; // error. capture by value
	auto f2 = [k] () mutable { k = 10; }; // ok. �׷���, ���纻�� ����
	auto f3 = [&k]()         { k = 10; }; // ok  capture by reference

	// f1 ����
	class GeneratedName1
	{
		int k;
	public:
		GeneratedName1(int n) : k(n) {}

		void operator()() const
		{
			k = 10;	// error. ������ �Լ����� ���� �����ϱ� ����
		}
	};
	auto f1 = GeneratedName1{ k };
	//==========================================

	// f2 ����
	// mutable ���� : operator()() �Լ��� ��� �Լ��� ���� ����.
	class GeneratedName2
	{
		int k;
	public:
		GeneratedName2(int n) : k(n) {}

		void operator()() 
		{
			k = 10;	// ok. ���纻 k ����
					// main �� �������� k �� ��ȭ ����. 
		}
	};
	auto f2 = GeneratedName2{ k };

	//============================
	// f3 ����
	class GeneratedName3
	{
		int& k;
	public:
		GeneratedName3(int& n) : k(n) {}

		void operator()() const
		{
			k = 10;	 // ok. main �������� k�� ����
					 // k�� �������� �ᱹ ������ ����
					 // ���ڵ�� k�� ������ �ƴ� k�� ����Ű�� ���� ����
					 // �׷��� ����Լ��� ���� �ƴ�. 
		}
	};
	auto f3 = GeneratedName3{ k };
}