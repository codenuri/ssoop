// 교재 6page
// 확장자 : .cpp    .cxx   .cc
#include <stdio.h>

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
