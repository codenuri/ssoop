// category1
#include <list>
#include <vector>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	auto p1 = s.begin();
	auto p2 = v.begin();
	
	// #1. 반복자도 종류가 있습니다. ( iterator category)
	p1 = p1 + 3; // error   list 반복자는 + 안됨. ++만 가능
				//          +가 가능했다면
				//			"*(p1 + i) = 0" 같은 코드를 사용하게 됩니다.

	p2 = p2 + 3; // ok      vector 반복자는 + 가능

	// #2. 반복자를 5가지고 분류합니다.
	
	// input iterator :    ++p, =*p
	// output iterator :   ++p, *p =
	// 
	// ===> 위 2개는 멀티 패스 보장 안함, 
	// ===> 아래 3개는 멀티 패스 보장
	// 
	// forward iterator:   ++p, = *p			=> 싱글리스트
	// bidirectional iterator : =*p, ++, --		=> 더블리스트
	// random access iterator : =*p, ++, --, +, -, []  연속된메모리와유사


	// #3. 왜 5개 분류가 중요 합니까 ??

	auto ret = std::find(s.begin(), s.end(), 3);
			// => find 알고리즘의 1, 2번째 인자의 최소 요구 조건을
			//    5개 분류에서 찾으세요..

}

