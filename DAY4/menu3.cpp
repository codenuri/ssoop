#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// Menu2.cpp 까지
// => 모든 것을 타입으로 만들어서 사용하다는 개념
// => 지금 까지 배운 class 문법으로 2개의 클래스를 만든것!!!

// Menu3.cpp 부터
// => 이제 디자인 기법을 추가해 봅시다.


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

	void command() 
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
};



int main()
{
	MenuItem m11("참치김밥",   11);
	MenuItem m12("소고기김밥", 12);
	MenuItem m21("라면",      21);

	PopupMenu kimbab("김밥류");
	kimbab.add(&m11);
	kimbab.add(&m12);

	PopupMenu pm("오늘의 점심");
	pm.add(&kimbab); // 핵심!!!! ??? 지금은 error. 해결책은 menu4.cpp 소스!!
	pm.add(&m21);
	
	pm.command();
}
