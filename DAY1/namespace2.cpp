// #1. namespace 에 있는 함수는 접근하는 방법 3가지
// #2. using declaration 과 using directive 는 
// => 전역에는 사용하지 마세요
// => 사용하려면 함수 안에서만 사용하세요..

#include <stdio.h>

namespace Audio 
{
	void init() { printf("Audio init\n");	}
}
namespace Video
{
	void init()	{ printf("Video init\n");	}
}

// global namespace : 어떠한 이름공간도 포함되지 않은 공간
void init()	{ printf("global init\n");	}

// using declaration 과 using directive 는 
// 함수 안 또는 밖에 있을수 있습니다.
using Video::init;

int main()
{
	// #1. 완전한 이름을 사용한 접근(qualified name)
	Video::init();

	// #2. using declaration(선언) 사용
//	using Video::init;	// init 은 Video 이름 없이 사용 가능
	init();				// Video::init
	::init();			// global init
						// :: => scope resolution operator

	// #3. using directive(지시어) 사용
	using namespace Video; // Video 의 모든 요소를 Video 이름 없이 사용
	init();
}








