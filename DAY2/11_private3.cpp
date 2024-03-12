// C++ 스타일
class Person
{
private:	
	std::string name;
	int  age;

public:
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
};

// C#, java : 모든 멤버에 별도로 private, public 표기
class Person
{
	private std::string name;
	private int  age;

	public void set_age(int a)
	{
			if (a > 0 && a < 150)
				age = a;
	}
};