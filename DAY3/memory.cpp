// memory.cpp
#include <stdio.h>

int g = 0x11223344;

int main()
{
	static int s = 0x55667788;

	int n = 10; // ���ÿ��� �޸𸮸� �Ҵ��ϰ�
				// 10���� ä��� ���� �ڵ�

	printf("hello\n");

	printf("�Լ� �ּ� : %p\n", &main);
	printf("�������� �ּ� : %p\n", &g);
	printf("�������� �ּ� : %p\n", &n);

//	const char* sp = "abcd";
//	char sa[] = "abcd";
}

// �����Ҷ�
// 1. ���ڵ带 32��Ʈ(x86) ���� ������
// 2. ���ͳݿ��� Peview.exe �� ���ϼ���
// 3. PEView ���� ���� ������

// �����쿡�� .exe �� "PE ����" �̶�� �մϴ�.
// ������    "ELF" ��� �մϴ�.