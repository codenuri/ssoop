#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// C 언어
// 1. 프로그램의 기본 로직을 배울수 있고(if, for, while 등)
// 2. 포인터를 배우면서 메모리 구조를 배울수 있다.
// =>> 이때, 반드시 "메모리 그림을 직접 그리면서" 학습해야 합니다.

// C++ 언어
// 1. C++의 다양한 문법을 배우고
// 2. 객체지향 디자인을 배울수 있다.
// =>> 이때, 클래스 관계도(Diagram) 을 직접 그리면서 학습하는게 좋다.



class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& title) : title{title} {}
	virtual ~BaseMenu() {}

	std::string get_title() const { return title;}

	// 모든 메뉴가 선택되면 command 호출하기로 약속
	virtual void command() = 0;
};

//---------------------------------
class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& title, int id) 
		: BaseMenu{title}, id{id} {}

	void command()
	{
		std::cout << get_title() << " 메뉴 선택됨\n";
		_getch();	
	}
};

class PopupMenu : public BaseMenu
{
	std::vector<BaseMenu*> v;
public:
	PopupMenu( const std::string& title ) : BaseMenu{title} {}

	void add(BaseMenu* m) { v.push_back(m); }

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
	pm.add(&kimbab); 
	pm.add(&m21);
	
	pm.command();
}
