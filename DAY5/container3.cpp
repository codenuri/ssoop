#include <iostream>
#include <stack>
#include <queue>

int main()
{
	std::stack<int> s;
	std::queue<int> q;

	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl; // 20. 주의! 반환만 하고 제거 안됨.
	std::cout << s.top() << std::endl; // 20
	s.pop();
	std::cout << s.top() << std::endl; // 10

	// stack : 나중에 넣은것을 먼저 꺼내기(Last In First Out)
	// queue : 먼저 넣은 것을 먼저 꺼내기(First In First Out)
	q.push(10);
	q.push(20);

	std::cout << q.front() << std::endl; // 10
	std::cout << q.front() << std::endl; // 10
	q.pop();
	std::cout << q.front() << std::endl; // 20
}