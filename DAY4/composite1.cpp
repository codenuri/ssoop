// composite1.cpp
#include <iostream>

// 아래 코드가 실행되려면
// => Folder, File 클래스가 필요 합니다.
// => Menu 예제를 참고해서 만들어 복습할때 만들어 보세요
// => "COMPOSITE" 패턴이라는 디자인 패턴 입니다.
// => 구글에서 "COMPOISTE" 검색후, "이미지" 보기

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
	fo1->add(f2);

	std::cout << f1->get_size() << std::endl;
	std::cout << fo3->get_size() << std::endl;
	std::cout << fo1->get_size() << std::endl;
}
