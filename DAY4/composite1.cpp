// composite1.cpp
#include <iostream>

int main()
{
	Folder* fo1 = new Folder("root");
	Folder* fo2 = new Folder("AAA");
	Folder* fo2 = new Folder("BBB");

	File* f1 = new File("a.txt", 10);
	File* f2 = new File("b.txt", 30);

	fo1->add(fo2);
	fo1->add(fo3);

	fo2->add(f1);
	fo3->add(f2);

	std::cout << f1->get_size() << std::endl;
	std::cout << fo3->get_size() << std::endl;
	std::cout << fo1->get_size() << std::endl;
}
