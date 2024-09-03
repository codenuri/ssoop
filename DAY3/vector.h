#pragma once

// vector.h 
class vector
{
	int* ptr;
	int sz;
public:
	vector(int size, int value);
	~vector();
	int& at(int idx);
	int at(int idx) const;
	void resize(int newsize);
	int  size() const;
	bool empty() const;
};