// 1. virtual 은 선언부에만 표기 합니다.
// 2. override 도 선언부에만 표기 합니다.

// g++ cpp_file3-1.cpp menu.cpp  

#include "menu.h"
 

int main()
{
	PopupMenu* root = new PopupMenu("ROOT");
	PopupMenu* pm1 = new PopupMenu("색상 변경");
	PopupMenu* pm2 = new PopupMenu("해상도 변경");

	root->add(pm1);
	root->add(pm2);

	pm1->add( new MenuItem("RED",   11) );
	pm1->add( new MenuItem("BLUE",  12) );
	pm1->add( new MenuItem("GREEN", 13) );

	pm2->add( new MenuItem("HD",   21) );
	pm2->add( new MenuItem("FHD",  22) );
	pm2->add( new MenuItem("UHD",  23) );

	// 이제 메뉴를 시작하려면 ?
	root->command();
}