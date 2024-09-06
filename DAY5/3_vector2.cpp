#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v(8);

	v.resize(5);	// 어떻게 구현했을까 ?
					// 크기를 줄이는 것이 "핵심"

	std::cout << v.size() << ", " << v.capacity() << std::endl;
											// 5, 8

	v.push_back(0); // 끝에 하나 추가
					// 현재 상태는 "size < capacity" 이므로
					// 메모리 재할당 필요 없다.
					// 빠르게 동작( not expensive )

	std::cout << v.size() << ", " << v.capacity() << std::endl;
										// 6, 8

	v.shrink_to_fit(); // 필요 없는 여분의 메모리 제거해달라.
						// => 결국 6 개 메모리 재할당해서 사용

	std::cout << v.size() << ", " << v.capacity() << std::endl;
										// 6, 6

	v.push_back(0);	// 끝에 한개 추가
					// 현재는 "size == capacity" 상태
					// 메모리 재할당 필요!
					// expensive 연산!!

					// 메모리 재할당할때
					// g++ : 기존 크기 2배( 6 * 2 => 12)
					// vs  :         1.5 (6 * 1.5 => 9 )


	std::cout << v.size() << ", " << v.capacity() << std::endl;
									// 7, 9
}

// 위 코드는 연속된 메모리를 사용하는 컨테이너만 적용됩니다.
// => list 에는 없는 개념