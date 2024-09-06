#include <iostream>

// stack 과 queue 도 있습니다.
#include <stack>
#include <queue>


int main()
{
	std::stack<int> s;
	std::queue<int> q;

	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl; // 20. 제일 위를 꺼내기만 제거 안함
	std::cout << s.top() << std::endl; // 20

	s.pop(); // 제거만

	std::cout << s.top() << std::endl; // 10


	// queue 사용법
	q.push(10);
	q.push(20);

	// 요소 접근은 top() 이 아니고 front()
	std::cout << q.front() << std::endl;
	std::cout << q.front() << std::endl;

	// 제거는 stack 과 동일하게 pop
	q.pop();
}