#include <iostream>

// ���� ���̽� : ���Ѿ� �ϴ� ��Ģ(���������Լ�)�� ���� ���
// �߻� Ŭ���� : ���Ѿ� �ϴ� ��Ģ(���������Լ�) + �ٸ� ����� �ִ� ���

// C#, Java �� "interface", "abstract" ��� Ű���尡 ������ ���� �մϴ�.
// C++ �� ���� ���� Ű���� �����ϴ�.
// ����, �߻�Ŭ���� �ȿ� ���������Լ��� �ִ���, �ٸ� ����� �ִ����� ����
// �з�!!
// �׷���, �� ȥ��Ǵ� ��쵵 �ֽ��ϴ�.

//=============================================

// ī�޶� �����ڿ� ����� ���̿� ���Ѿ��ϴ� ��Ģ(�������̽�)
// �� ���� ���� �մϴ�.

// ��Ģ : "��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ��Ǿ�� �Ѵ�." ��� ǥ������ ����
//       "��� ī�޶�� �Ʒ� �������̽��� �����ؾ� �Ѵ�." ��� ǥ���մϴ�.

#define interface struct 

//class ICamera
//interface ICamera
struct ICamera
{
//public:	
	virtual void take() = 0;

	virtual ~ICamera() {}   // �������̽��� ���������δ� 
							// �ᱹ "��� Ŭ����" �Դϴ�.
							// �Ҹ��ڸ� "virtual" �� �ؾ� �մϴ�.
};




// ī�޶� ����ڴ� "��ü���� ��ǰ"�� ������� ����(�������� ����)
// ��Ģ��� ����ϸ� �˴ϴ�.
class Person
{
public:
	void use_camera(ICamera* c) { c->take(); }
};

// ��� ī�޶� ��ǰ�� ��Ģ�� ���Ѿ� �մϴ�.
class Camera : public ICamera
{
public:
	void take() override { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() override { std::cout << "take HD picture" << std::endl; }
};

class UHDCamera : public ICamera
{
public:
	void take() override { std::cout << "take UHD picture" << std::endl; }
};

int main()
{
	Person p;

	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); 

	UHDCamera uhc;
	p.use_camera(&uhc); // Person �ڵ��� ��������
						// ���߿� �߰��� ī�޶� ����Ҽ� �ִ�.
						// OCP ����!!!
}

// ���� ����(tightly coupling)
// => �ϳ��� Ŭ������ �ٸ� Ŭ���� ���� Ŭ���� �̸��� ���� ����ϴ°�
// => use_camera(HDCamera*)
// => ��ü �Ұ����� ������ ������


// ���� ����(loosely coupling)
// => �ϳ��� Ŭ������ �ٸ� Ŭ���� ���� ��Ģ�� ���� �������̽��� ���ؼ�
//    ����ϴ°�
// => use_camera( ICamera*)
// => ��ü ������ ������ ������