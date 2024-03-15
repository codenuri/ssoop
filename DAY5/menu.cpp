// menu.cpp
#include "menu.h"

BaseMenu::BaseMenu(const std::string& title) : title{title} {}
BaseMenu::~BaseMenu() {}
std::string BaseMenu::get_title() const { return title;}





//---------------------------------


MenuItem::MenuItem(const std::string& title, int id) 
	: BaseMenu{title}, id{id} {}

void MenuItem::command() 
{
	std::cout << get_title() << " 메뉴 선택됨\n";
	_getch();	
}






PopupMenu::PopupMenu( const std::string& title ) : BaseMenu{title} {}

void PopupMenu::add(BaseMenu* m) { v.push_back(m); }

void PopupMenu::command()  
{
	while(1)
	{
		system("cls"); 

		auto sz = v.size();
		for( int i = 0; i < sz; i++ )
		{
			std::cout << i + 1 << ". " << v[i]->get_title() << std::endl;
		}
		std::cout << sz + 1 << ". 종료\n";
		std::cout << "메뉴를 선택하세요 >> ";
		int cmd;
		std::cin >> cmd;

		if ( cmd == sz + 1 ) 
			break;

		if ( cmd < 0 || cmd > sz + 1)
			continue;

		v[cmd-1]->command(); 
	}
}
