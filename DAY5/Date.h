// Date.h
class Date
{
private:
	int year;
	int month;
	int day;	
	static int days[12];	

public:
	Date(int year, int month, int day);	
	void print() const;
	bool is_leap_year() const;
	static bool is_leap_year(int year);
};