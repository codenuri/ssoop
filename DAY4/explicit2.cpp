#include <vector>
#include <string>

void f1(std::string s)      {}
void f2(std::vector<int> v) {}

int main()
{
	// #1. std::string, std::vector �� ���ڰ� �Ѱ��� �����ڰ� �ֽ��ϴ�.
	std::string s1("hello");
	std::vector<int> v1(10);

	// #2. �Ʒ� ������ �ڵ尡 �Ǵ°� ������ �ȵǴ°� ������ ������ ������
	f1("hello"); // �Ǵ°� �����ϴ�. �ߵ˴ϴ�
				 // std::string s = "hello" �� �ȴٴ� �ǹ�
				 // std::string(const char*) �� explicit �ƴ�.
	f2(10); // �ȵǾ� �մϴ�. ���� �ȵ˴ϴ�
			// std::vector<int> v = 10 �� �ȵȴ´ٴ� ��
			// std::vector(int) �����ڴ� explicit �� ����Ǿ����ϴ�.
}