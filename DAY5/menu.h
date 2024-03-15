// menu.h
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& title);
	virtual ~BaseMenu();
	std::string get_title() const;
	virtual void command() = 0;
};

class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& title, int id);
	void command() override;
};


class PopupMenu : public BaseMenu
{
	std::vector<BaseMenu*> v;
public:
	PopupMenu( const std::string& title );
	void add(BaseMenu* m); 
	void command() override ;
};