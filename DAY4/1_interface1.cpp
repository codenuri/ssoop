#include <iostream>

// 159page ~

class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class Person
{
public:
	void use_camera(Camera* c)   { c->take(); }
	void use_camera(HDCamera* c) { c->take(); }
};

int main()
{
	Person p;

	Camera c;
	p.use_camera(&c);	

	HDCamera hc;
	p.use_camera(&hc); // ???
}


// OCP
// ��� Ȯ�忡�� ���� �ְ�(Open, �̷��� Ŭ����/����� �߰��Ǿ)
// �ڵ� �������� ���� �־��(Close, ���� �ڵ�� �������� �ʵ���)
// �����ؾ� �Ѵٴ� �̷�(Principle)

// Open Close Principle( ��������� ��Ģ )

// �� �ڵ�� OCP �� �������� ���ϴ� �ڵ�