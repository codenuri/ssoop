// 교재 6page
// 확장자 : .cpp    .cxx   .cc
#include <stdio.h>

// namespace : 프로그램의 구성 요소를 논리적으로 분리할때 사용
//             이름 충돌등을 막을수 있다.
// C언어를 제외한 대부분의 객체지향 언어가 지원.

namespace Audio 
{
	void init() { printf("Audio init\n");	}
}
namespace Video
{
	// Video 관련 모든 함수, 구조체등을 이 안에서 만들면 됩니다.
	void init()	{ printf("Video init\n");	}
}

int main()
{
	Video::init();
}
