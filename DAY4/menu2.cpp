#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& title, int id) 
		: title{title}, id{id} {}

	std::string get_title() const { return title;}

	void command()
	{
		std::cout << get_title() << " 메뉴 선택됨\n";
		_getch();	
	}
};

class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;
public:
	PopupMenu( const std::string& title ) : title{title} {}

	void add(MenuItem* m) { v.push_back(m); }

	// popupmenu 선택시 동작을 구현하면 됩니다.
	void command() 
	{
		while(1)
		{
			system("cls"); // 화면을 지우는 명령

			auto sz = v.size();
			for( int i = 0; i < sz; i++ )
			{
				std::cout << i + 1 << ". " << v[i]->get_title() << std::endl;
			}
			std::cout << sz + 1 << ". 종료\n";
			std::cout << "메뉴를 선택하세요 >> ";
			int cmd;
			std::cin >> cmd;
			
			v[cmd-1]->command(); // MenuItem 도 선택시 command()호출.. 
		}



	}
};



int main()
{
	MenuItem m1("김밥", 11);
	MenuItem m2("라면", 12);


	PopupMenu pm("오늘의 점심");

	pm.add(&m1);
	pm.add(&m2);
	
	pm.command(); // 팝업메뉴 선택시 해야할 동작을 생각해 보세요
				  // 1. 김밥
				  // 2. 라면
				  // 3. 종료
				  // 메뉴를 선택하세요 >> 	
}
