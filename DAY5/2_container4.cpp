#include <iostream>

// stack �� queue �� �ֽ��ϴ�.
#include <stack>
#include <queue>


int main()
{
	std::stack<int> s;
	std::queue<int> q;

	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl; // 20. ���� ���� �����⸸ ���� ����
	std::cout << s.top() << std::endl; // 20

	s.pop(); // ���Ÿ�

	std::cout << s.top() << std::endl; // 10


	// queue ����
	q.push(10);
	q.push(20);

	// ��� ������ top() �� �ƴϰ� front()
	std::cout << q.front() << std::endl;
	std::cout << q.front() << std::endl;

	// ���Ŵ� stack �� �����ϰ� pop
	q.pop();
}